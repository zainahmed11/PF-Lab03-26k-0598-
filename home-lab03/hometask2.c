#include<stdio.h>
int main(){
	char name[67];
	float distance;
	int number;
	double height;
	long steps;
	
	printf("\nEnter your Name: ");
	scanf("%s",&name);
	printf("\nEnter your favourite number: ");
	scanf("%i",&number);
	printf("\nEnter the number of km you have ran:");
	scanf("%f",&distance);
	printf("\nEnter your height in cm: ");
	scanf("%lf",&height);
	printf("\nEnter your daily number of steps:");
	scanf("%ld",&steps);
	
	printf("HEYY %s! Your favourite number is %i. Your daily number of steps are %ld. your have ran %f kilometers and your height is %lf cm."
	,name,number,steps,distance,height);
	
	return 0;
}
