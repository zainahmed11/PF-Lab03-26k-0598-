#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%i",&num);
	int remainder=num % 2;
	if (remainder==0 )
	printf("EVEN");
	else printf("ODD");
	
	return 0;
}
