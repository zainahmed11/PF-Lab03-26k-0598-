#include<stdio.h>
int main(){
	int bal, draw;
	printf("\n Enter balance: ");
	scanf("%d",&bal);
	printf("\n Enter withdrawal amount: ");
	scanf("%d",&draw);
	if (draw%500==0 && draw<=bal && draw<25000){
		printf("\nWithdraw successful. ");
		int cal=bal-draw;
		printf("Remaining balance: %d",cal);}
		
		else printf("\nAmount is not sufficient");
return 0;	
	}

