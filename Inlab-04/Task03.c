#include<stdio.h>
int main(){
	int marks;
	printf("Enter Marks:");
	scanf("%d",&marks);
	if(marks<0 || marks>100)
	printf("marks invalid");
	
	else if (marks>=85)
	printf("Grade: A");
	else if(marks>=70 && marks<85)
	printf("Grade: B");
	else if(marks>=60 && marks<70)
	printf("Grade: C");
	else if(marks>=50 && marks<60)
	printf("Grade: D");
	else printf("Grade: F");
	return 0;
}
