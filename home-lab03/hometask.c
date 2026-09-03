#include<stdio.h>
#include<stdbool.h>
int main(){
	int age;
	float height;
	double number;
	char name[50];
	
	printf("\nEnter your name: ");
	scanf("%s",&name);
	
	printf("\nEnter your age: ");
	scanf("%i",&age);
	
	printf("\nEnter your height in cm: ");
	scanf("%f",&height);
	
	printf("\nEnter your Phone Number: ");
	scanf("%lf",&number);
	
	bool result = (age>18);
	printf("%d",result);
	
	printf("\nYour name is %s. Your age is %i. Your height is %f. Your phone number is %lf", name,age,height,number);
}

