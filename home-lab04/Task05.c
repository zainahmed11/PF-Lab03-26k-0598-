#include<stdio.h>
int main(){
	float units;
	float bill;
	printf("\nEnter unit consumed: ");
	scanf("%f",&units);
	if(units<=100){
		bill=units*5;
		printf("Total Bill: Rs. %.f", bill);
	}
	else if(units>100 && units<=200){
		bill=units*8;
			printf("Total Bill: Rs. %.f", bill);}
	else if(units>200 && units<=400){
		bill=units*12;
			printf("Total Bill: Rs. %.f", bill);}
	else if(units>400){
		bill=units*8;
			printf("Total Bill: Rs. %.f", bill);}
			
	else printf("Enter valid unit number");
		
		return 0;

}
