#include<stdio.h>
int main(){
	int num1,num2;
	char oper;
	float res;
	printf("\nEnter the first number: ");
	scanf(" %d",&num1);
	printf("\nEnter the operand: ");
	scanf(" %c",&oper);
	printf("\nEnter the second number: ");
	scanf(" %d",&num2);
	switch(oper){
		case '+': //first case
			res=num1+num2;
			printf("%.f",res);
			break;
		case '-'://second case
			res=num1-num2;
			printf("%.f",res);
			break;
		case '*'://third case
			res=num1*num2;
			printf("%.f",res);
			break;
		case '/'://fourth case
			res=num1/num2;
			if(num2==0)
				printf("Denominator can never be zero");
			else printf("%.f",res);
			break;
			
			default:
				printf("HI LOL");
				
	return 0;
	}
	
	
}
