#include<stdio.h>
int main(){
	float s1, s2, s3, s4, s5, avg;
	int i;
	for( i=0 ; i<100 ; i++){
		
	printf("\nEnter marks of subject 1: ");
	scanf("%f", &s1);
	printf("\nEnter marks of subject 2: ");
	scanf("%f", &s2);
	printf("\nEnter marks of subject 3: ");
	scanf("%f", &s3);
	printf("\nEnter marks of subject 4: ");
	scanf("%f", &s4);
	printf("\nEnter marks of subject 5: ");
	scanf("%f", &s5);
	avg=(s1+s2+s3+s4+s5)/5;
	
	if( s1<33 || s2<33 || s3<33 || s4<33 || s5<33)
		printf("\nStatus: Fail - Subject Deficiency");
	else{
	if(avg>=80)
		printf("\nStatus: Distinction");
	else if(avg>=60 && avg<80)
		printf("\nStatus: Pass");
	else printf("\nStatus: Fail");}
}
	return 0;
		
}
