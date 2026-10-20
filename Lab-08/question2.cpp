#include <stdio.h>

int main() {
    int row, column;
    int count = 0;
    int identity = 1;
    int diagonal = 1;
    int symmetric = 1;
    int null=0;

    printf("\nEnter dimensions of the matrix: ");
    scanf("%d %d", &row, &column);

    int matrix[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("\nEnter the elements for Row %d Column %d: ",
                   i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    if (row == column) {
        printf("\nSquare matrix");
    } else {
        printf("\nRectangular matrix");
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }

    if (count == row * column) {
        printf("\nZero matrix");
    }

    if (row == column) {
      
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (i == j && matrix[i][j] != 1) {
                    identity = 0;
                } else if (i != j && matrix[i][j] != 0) {
                    identity = 0;
                }
            }
        }

        if (identity == 1) {
            printf("\nIdentity matrix");
        }

     
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (i != j && matrix[i][j] != 0) {
                    diagonal = 0;
                }
            }
        }

        if (diagonal == 1) {
            printf("\nDiagonal matrix");
        }

   
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                }
            }
        }

        if (symmetric == 1) {
            printf("\nSymmetric matrix");}
            
        }
        
        
        if(column==0){
        	printf("\nRow matrix");
		}
		
		if (row==0){
			printf("\nColumn matrix");
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(matrix[i][j]==0){
				null++;
			}
		}
	}
	if(null==(row*column)){
		printf("\nNull Matrix");
	}
		return 0;
}

