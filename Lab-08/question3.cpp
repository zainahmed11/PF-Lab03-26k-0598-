#include<stdio.h>
int main(){
	int matA[3][3]={{1,2,3},{2,4,5},{6,7,8}};
	int matB[3][3]={{2,4,5},{7,8,9},{0,1,6}};
	int result[3][3];
	
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		result[i][j]=0;
		for(int k=0;k<3;k++){
			  result[i][j] += matA[i][k] * matB[k][j];
		}
	}}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" %d", result[i][j]);
		}
		printf("\n");
	}
}
