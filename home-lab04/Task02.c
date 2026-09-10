#include<stdio.h>
int main(){
	float s1, s2, s3;
	printf("\nEnter the length of first side of triangle: ");
	scanf("%f", &s1);
	printf("\nEnter the length of second side of triangle: ");
	scanf("%f", &s2);
	printf("\nEnter the length of third side of triangle: ");
	scanf("%f", &s3);
	if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
	printf("\nValid triangle ->");
	
		if(s1==s2 && s2==s3)
			printf(" Type: Equilateral");
			else if( s1==s2 || s2==s3 || s1==s3)
				printf(" Type: Isoceles");
		else printf(" Type: Scalene");}
	else {printf("\nNot a triangle");}
	return 0;
}
