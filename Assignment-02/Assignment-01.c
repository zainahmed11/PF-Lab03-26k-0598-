#include <stdio.h>

int main()
{
    int seats[5][8] = {
        {0, 0, 1, 0, 0, 0, 0, 1},
        {0, 1, 1, 0, 0, 0, 1, 0},
        {1, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 0},
        {1, 1, 0, 0, 0, 0, 0, 0}};

    int count = 0;
    int together;

    printf("Free seats per row: ");

    for (int row = 0; row < 5; row++)
    {
        int row_count = 0;

        for (int column = 0; column < 8; column++)
        {
            if (seats[row][column] == 0)
            {
                row_count++;
            }
        }

        printf("%d  ", row_count);
    }

    for (int row = 0; row < 5; row++)
    {
        for (int column = 0; column < 8; column++)
        {
            if (seats[row][column] == 0)
            {
                count++;
            }
        }
    }

    printf("\t\tTotal free seats: %d", count);

    printf("\nInput the Number of customers who want to sit together: ");
    scanf("%d", &together);

    if (together <= 0 || together > 8)
    {
        printf("\nInvalid consecutive seat requirement!");
        return 0;
    }

    int middle = 5 / 2;
    int found = 0;

    for (int distance = 0; distance < 5 && found == 0; distance++)
    {
        for (int side = 0; side < 2 && found == 0; side++)
        {
            int row;

            if (side == 0)
                row = middle - distance;
            else
                row = middle + distance;

            if (row < 0 || row >= 5)
                continue;

            for (int column = 0; column <= 8 - together; column++)
            {
                int available = 1;

                for (int j = column; j < column + together; j++)
                {
                    if (seats[row][j] != 0)
                    {
                        available = 0;
                        break;
                    }
                }

                if (available == 1)
                {
                    for (int j = column; j < column + together; j++)
                    {
                        seats[row][j] = 1;
                    }

                    printf("\nSeats successfully allocated!");
                    printf("\nRow: %d", row);
                    printf("\nStarting seat: %d\n", column);

                    found = 1;
                    break;
                }
            }

            if (distance == 0)
                break;
        }
    }

    if (found == 0)
    {
        printf("\nNo suitable consecutive seats available.\n");
    }

    for (int row = 0; row < 5; row++)
    {
        for (int column = 0; column < 8; column++)
        {
            if (seats[row][column] == 1)
                printf("X ");
            else
                printf("_ ");
        }

        printf("\n");
    }

    return 0;
}