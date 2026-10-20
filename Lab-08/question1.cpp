#include <stdio.h>
int main()
{
    int row, column;
    printf("\nEnter dimensions of the matrix: ");
    scanf("%d %d", &row, &column);
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("\nEnter the elements for Row %d Column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d",matrix[i][j]);
        }
        printf("\n");
        
    }
    printf("\nTranspose\n");
    //transpose
    int transpose[column][row];
    for(int i=0;i<row;i++){
    	for(int j=0;j<column;j++){
    		transpose[j][i]=matrix[i][j];
		}
	}
	
	for(int i=0;i<column;i++){
    	for(int j=0;j<row;j++){
    		printf(" %d", transpose[i][j]);
		}
		printf("\n");
	}
}
