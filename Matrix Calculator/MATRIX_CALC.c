#include <stdio.h>
int search()
{
    int row, column, find;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Elements for Row %d: ", i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the Number you want to find: ");
    scanf("%d", &find);
    int search = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (find == mat[i][j])
            {
                printf("Number found at Row %d Of Column %d", i + 1, j + 1);
                search = 1;
                break;
            }
            if (search == 1)
            {
                break;
            }
        }
    }
    if (search == 0)
    {
        printf("\nNumber is not available in the matrix");
    }
}
int even_odd()
{
    int row, column;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Elements for Row %d: ", i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    int even = 0, odd = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d", mat[i][j]);
            if (mat[i][j] % 2 == 0)
            {
                even++;
            }
            else
                odd++;
        }
        printf("\n");
    }
    printf("Even Digits:%d\nOdd Digits:%d", even, odd);
}
int max_min()
{
    int row, column;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Elements for Row %d: ", i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    int max = 0;
    int min = mat[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d", mat[i][j]);
            if (mat[i][j] > max)
            {
                max = mat[i][j];
            }
            if (min > mat[i][j])
            {
                min = mat[i][j];
            }
        }
        printf("\n");
    }
    printf("\nMax: %d\nMin: %d", max, min);
}
int diagonalsum()
{
    int row, column;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Elements for Row %d: ", i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
    // DIAGONALSUM
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + mat[i][i];
    }
    printf("\nSum of Diagonal is %d", sum);
}
int columnsum()
{
    int row, column;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Elements for Row %d: ", i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
    // COLUMNSUM
    for (int j = 0; j < column; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum = sum + mat[i][j];
        }
        printf("Sum of Column %d is %d\n", j + 1, sum);
    }
}
int rowsum()
{
    int row, column;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Elements for Row %d: ", i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
    // ROWSUM
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum = sum + mat[i][j];
        }
        printf("sum of Row %d is %d\n", i + 1, sum);
    }
}
int sumofall()
{
    int row, column;
    int sum = 0;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Elements for Row %d: ", i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d", mat[i][j]);
            sum = sum + mat[i][j];
        }
        printf("\n");
    }
    printf("=\n");
    printf("%d", sum);
}
int symmetric()
{
    int row, column;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    if (row != column)
    {
        printf("\nMatrix is not symmetric");
    }
    else
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("Enter Elements for Row %d: ", i + 1);
                scanf("%d", &mat[i][j]);
            }
        }
        //
        int trans[column][row];
        int symmetric = 1;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                trans[j][i] = mat[i][j];
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (trans[i][j] != mat[i][j])
                {
                    symmetric = 0;
                }
                if (symmetric == 0)
                {
                    break;
                }
            }
        }
        if (symmetric == 1)
        {
            printf("\nMatrix is symmetric");
        }
        else
            printf("\nMatrix is not symmetric");
    }
}
int transpose()
{
    int row, column;
    printf("\nEnter Row of Matrix: ");
    scanf("%d", &row);
    printf("Enter Column of Matrix: ");
    scanf("%d", &column);
    int mat[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Elements for Row %d: ", i + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    // DISPLAY
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
    // TRANSPOSE
    int trans[column][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    // DISPLAY TRANSPOSE
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf(" %d", trans[i][j]);
        }
        printf("\n");
    }
}
int multiplication()
{
    int row1, column1, row2, column2;
    printf("\nEnter Row of Matrix A: ");
    scanf("%d", &row1);
    printf("Enter Column of Matrix A: ");
    scanf("%d", &column1);
    printf("\nEnter Row of Matrix B: ");
    scanf("%d", &row2);
    printf("\nEnter Column of Matrix B: ");
    scanf("%d", &column2);
    if (column1 == row2)
    {
        int matA[row1][column1];
        int matB[row2][column2];

        // A
        printf("\nMATRIX A\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("Enter Elements for Row %d: ", i + 1);
                scanf("%d", &matA[i][j]);
            }
        }

        // B
        printf("\nMATRIX B\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("Enter Elements for Row %d: ", i + 1);
                scanf("%d", &matB[i][j]);
            }
        }

        // DISPLAYING A
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf(" %d", matA[i][j]);
            }
            printf("\n");
        }

        printf(" *\n");
        // DISPLAYING B
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf(" %d", matB[i][j]);
            }
            printf("\n");
        }
        int multiplication[row1][column2];
        // MULTIPLICATION
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                multiplication[i][j] = 0;

                for (int k = 0; k < column1; k++)
                {
                    multiplication[i][j] += matA[i][k] * matB[k][j];
                }
            }
        }

        // RESULT
        printf(" =\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf(" %d", multiplication[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nMultiplication Invalid!");
}
int subtraction()
{
    int row1, column1, row2, column2;
    printf("\nEnter Row of Matrix A: ");
    scanf("%d", &row1);
    printf("Enter Column of Matrix A: ");
    scanf("%d", &column1);
    printf("\nEnter Row of Matrix B: ");
    scanf("%d", &row2);
    printf("\nEnter Column of Matrix B: ");
    scanf("%d", &column2);
    if ((row1 == row2) && (column1 == column2))
    {
        int row = row1;
        int column = column1;
        int matA[row][column];
        int matB[row][column];

        // A
        printf("\nMATRIX A\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("Enter Elements for Row %d: ", i + 1);
                scanf("%d", &matA[i][j]);
            }
        }

        // B
        printf("\nMATRIX B\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("Enter Elements for Row %d: ", i + 1);
                scanf("%d", &matB[i][j]);
            }
        }

        // DISPLAYING A
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf(" %d", matA[i][j]);
            }
            printf("\n");
        }

        printf(" -\n");
        // DISPLAYING B
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf(" %d", matB[i][j]);
            }
            printf("\n");
        }

        // SUBTRACTION
        int subtraction[row][column];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                subtraction[i][j] = matA[i][j] - matB[i][j];
            }
        }

        // RESULT
        printf(" =\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf(" %d", subtraction[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nAddition Invalid!");
}
int addition()
{
    int row1, column1, row2, column2;
    printf("\nEnter Row of Matrix A: ");
    scanf("%d", &row1);
    printf("Enter Column of Matrix A: ");
    scanf("%d", &column1);
    printf("\nEnter Row of Matrix B: ");
    scanf("%d", &row2);
    printf("\nEnter Column of Matrix B: ");
    scanf("%d", &column2);
    if ((row1 == row2) && (column1 == column2))
    {
        int row = row1;
        int column = column1;
        int matA[row][column];
        int matB[row][column];

        // A
        printf("\nMATRIX A\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("Enter Elements for Row %d: ", i + 1);
                scanf("%d", &matA[i][j]);
            }
        }

        // B
        printf("\nMATRIX B\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("Enter Elements for Row %d: ", i + 1);
                scanf("%d", &matB[i][j]);
            }
        }

        // DISPLAYING A
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf(" %d", matA[i][j]);
            }
            printf("\n");
        }

        printf(" +\n");
        // DISPLAYING B
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf(" %d", matB[i][j]);
            }
            printf("\n");
        }

        // ADDITION
        int addition[row][column];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                addition[i][j] = matA[i][j] + matB[i][j];
            }
        }

        // RESULT
        printf(" =\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf(" %d", addition[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nAddition Invalid!");
}

int main()
{
    int choice;
    printf("\n=======MATRIX CALCULATOR=======\n");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Symmetric\n6.Sum of all elements\n7.Sum of Row\n8.Sum of Column\n9.Sum of Diagonal\n10.Maximum and Minimum Element\n11.Count Even and Odd elements\n12.Search for a number\n0.Exit\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            transpose();
            break;
        case 5:
            symmetric();
            break;
        case 6:
            sumofall();
            break;
        case 7:
            rowsum();
            break;
        case 8:
            columnsum();
            break;
        case 9:
            diagonalsum();
            break;
        case 10:
            max_min();
            break;
        case 11:
            even_odd();
            break;
        case 12:
            search();
            break;
        default:
            printf("\nInvalid Choice!");
        }
        printf("\n=======MATRIX CALCULATOR=======\n");
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Symmetric\n6.Sum of all elements\n7.Sum of Row\n8.Sum of Column\n9.Sum of Diagonal\n10.Maximum and Minimum Element\n11.Count Even and Odd elements\n12.Search for a number\n0.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
    }
    printf("\nExited");
    return 0;
}