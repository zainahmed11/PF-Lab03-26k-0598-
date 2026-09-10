#include<stdio.h>
int main(){
	float weight, height;
	printf("\nEnter Weight in kg: ");
	scanf("%f",&weight);
	printf("\nEnter Height in meters: ");
	scanf("%f",&height);
	float BMI=(weight/(height*height));
	printf("BMI= %.2f",BMI);
	if(BMI<18.5)
		printf("-> Category: Underweight");
	else if(BMI>=18.5 && BMI<=24.9)
		printf("-> Category: Normal");
	else if(BMI>=25 && BMI<=29.9)
		printf("-> Category: Overweight");
	else printf("-> Category: Obese");

return 0;	
}
