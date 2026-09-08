#include<stdio.h>
int main(){
	int num1,num2, result;
	char oper;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the Operator: ");
	scanf(" %c",&oper);
	printf("Enter the Second number: ");
	scanf("%d",&num2);
	switch(oper)
	{
		case '+':
			result=num1+num2;
			printf("%d",result);
		
			break;
		case '-':
			result=num1-num2;
			printf("%d",result);
			
			break;
		case '/':
			result=num1/num2;
			if (num2==0)
			printf("Denominator can never be zero");
			else printf("%d",result);
			
			break;
		case '*':
			result=num1*num2;
			printf("%d",result);
			
			break;
		default:
			printf("invalid");
			
	}
}
