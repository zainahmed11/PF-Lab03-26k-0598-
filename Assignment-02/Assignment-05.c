
#include <stdio.h>
#include <string.h>

void displayMenu()
{
    printf("\n===== UNIVERSITY LIBRARY =====\n");
    printf("1. Member Registration\n");
    printf("2. Display Available Books\n");
    printf("3. Borrow a Book\n");
    printf("4. Return a Book\n");
    printf("5. Display Member Record\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

void registerMember(char name[], int *studentID, int *memberType)
{
    int type;

    printf("Enter member name: ");
    scanf(" %49[^\n]", name);

    printf("Enter student ID: ");
    scanf("%d", studentID);

    do
    {
        printf("Membership type (1 = Student, 2 = Faculty): ");
        scanf("%d", &type);

        if (type != 1 && type != 2)
            printf("Invalid membership type!\n");

    } while (type != 1 && type != 2);

    *memberType = type;

    printf("Member registered successfully!\n");
}

void displayBooks(int bookIDs[], char bookTitles[][50],
                  int availableCopies[], int totalBooks)
{
    printf("\n%-10s %-30s %-10s\n", "Book ID", "Title", "Copies");

    for (int i = 0; i < totalBooks; i++)
    {
        printf("%-10d %-30s %-10d\n",
               bookIDs[i], bookTitles[i], availableCopies[i]);
    }
}

void borrowBook(int bookIDs[], char bookTitles[][50],
                int availableCopies[], int totalBooks,
                int borrowedBookIDs[], int *borrowedCount,
                int memberType)
{
    int id, days, index = -1;

    if (*borrowedCount >= 3)
    {
        printf("You cannot borrow more than 3 books at a time.\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < totalBooks; i++)
    {
        if (bookIDs[i] == id)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Invalid book ID!\n");
        return;
    }

    if (availableCopies[index] <= 0)
    {
        printf("No copies available!\n");
        return;
    }

    printf("Enter intended borrowing days: ");
    scanf("%d", &days);

    while (days <= 0)
    {
        printf("Days must be positive. Enter again: ");
        scanf("%d", &days);
    }

    borrowedBookIDs[*borrowedCount] = id;
    (*borrowedCount)--;
    (*borrowedCount) += 2;
    availableCopies[index]--;

    printf("Book borrowed successfully: %s\n", bookTitles[index]);

    if (memberType == 1)
        printf("Student borrowing period: 14 days\n");
    else
        printf("Faculty borrowing period: 30 days\n");
}

float returnBook(int bookIDs[], int availableCopies[],
                 int totalBooks, int borrowedBookIDs[],
                 int *borrowedCount, int memberType,
                 float *totalFine)
{
    int id, days, index = -1, borrowedIndex = -1;
    int allowedDays, fineRate;
    float fine = 0;
    char code[20];

    if (*borrowedCount == 0)
    {
        printf("You have no borrowed books to return.\n");
        return 0;
    }

    printf("Enter book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < *borrowedCount; i++)
    {
        if (borrowedBookIDs[i] == id)
        {
            borrowedIndex = i;
            break;
        }
    }

    if (borrowedIndex == -1)
    {
        printf("You have not borrowed this book!\n");
        return 0;
    }

    for (int i = 0; i < totalBooks; i++)
    {
        if (bookIDs[i] == id)
        {
            index = i;
            break;
        }
    }

    printf("Enter actual days kept: ");
    scanf("%d", &days);

    while (days <= 0)
    {
        printf("Days must be positive. Enter again: ");
        scanf("%d", &days);
    }

    if (memberType == 1)
    {
        allowedDays = 14;
        fineRate = 20;
    }
    else
    {
        allowedDays = 30;
        fineRate = 10;
    }

    if (days > allowedDays)
    {
        fine = (days - allowedDays) * fineRate;

        printf("Fine before waiver: Rs. %.2f\n", fine);
        printf("Enter membership code (LIB2026) for 50%% waiver, or NONE: ");
        scanf("%19s", code);

        if (strcmp(code, "LIB2026") == 0)
        {
            fine = fine * 0.5f;
            printf("50%% waiver applied!\n");
        }
    }

    *totalFine += (days > allowedDays)
                      ? (days - allowedDays) * fineRate
                      : 0;

    availableCopies[index]++;

    for (int i = borrowedIndex; i < *borrowedCount - 1; i++)
    {
        borrowedBookIDs[i] = borrowedBookIDs[i + 1];
    }

    (*borrowedCount)--;

    printf("Book returned successfully!\n");
    printf("Fine payable for this return: Rs. %.2f\n", fine);

    return fine;
}

void displayMemberRecord(char name[], int studentID, int memberType,
                         int borrowedBookIDs[], int borrowedCount,
                         float totalFine, float fineAfterWaiver)
{
    printf("\n===== MEMBER RECORD =====\n");
    printf("Name: %s\n", name);
    printf("Student ID: %d\n", studentID);
    printf("Membership: %s\n", memberType == 1 ? "Student" : "Faculty");

    printf("Currently borrowed books: ");

    if (borrowedCount == 0)
        printf("None");

    for (int i = 0; i < borrowedCount; i++)
        printf("%d ", borrowedBookIDs[i]);

    printf("\nTotal fine before waivers: Rs. %.2f\n", totalFine);
    printf("Final fine payable: Rs. %.2f\n", fineAfterWaiver);
}

int main()
{
    int bookIDs[4] = {101, 102, 103, 104};

    char bookTitles[4][50] = {
        "Programming in C",
        "Data Structures",
        "Database Systems",
        "Computer Networks"};

    int availableCopies[4] = {5, 3, 0, 4};

    char name[50] = "";
    int studentID = 0, memberType = 0;
    int borrowedBookIDs[3];
    int borrowedCount = 0;
    int registered = 0;
    int choice;

    float totalFine = 0;
    float fineAfterWaiver = 0;

    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            registerMember(name, &studentID, &memberType);
            registered = 1;
            break;

        case 2:
            displayBooks(bookIDs, bookTitles,
                         availableCopies, 4);
            break;

        case 3:
            if (registered)
                borrowBook(bookIDs, bookTitles, availableCopies,
                           4, borrowedBookIDs, &borrowedCount,
                           memberType);
            else
                printf("Register a member first!\n");
            break;

        case 4:
            if (registered)
                fineAfterWaiver += returnBook(
                    bookIDs, availableCopies, 4,
                    borrowedBookIDs, &borrowedCount,
                    memberType, &totalFine);
            else
                printf("Register a member first!\n");
            break;

        case 5:
            if (registered)
                displayMemberRecord(name, studentID, memberType,
                                    borrowedBookIDs, borrowedCount,
                                    totalFine, fineAfterWaiver);
            else
                printf("Register a member first!\n");
            break;

        case 6:
            printf("Exiting library system...\n");
            break;

        default:
            printf("Invalid menu choice!\n");
        }

    } while (choice != 6);

    return 0;
}
