#include<stdio.h>
int main(){
	int month,year;
	printf("\nEnter a month number from 1-12: ");
	scanf("%d",&month);
	printf("\nEnter the year: ");
	scanf("%d",&year);
	
	switch(month){
	
	case 1:
		printf("January: 31 DAYS");
	break;
	case 2:
		 if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		printf("February: 29 DAYS");
		else printf("February: 28 DAYS");
	break;
	case 3:
		printf("March: 31 DAYS");
	break;
	case 4:
		printf("April: 30 DAYS");
	break;
	case 5:
		printf("May: 31 DAYS");
	break;
	case 6:
		printf("June: 30 DAYS");
	break;
	case 7:
		printf("July: 31 DAYS");
	break;
	case 8:
		printf("August: 31 DAYS");
	break;
	case 9:
		printf("September: 30 DAYS");
	break;
	case 10:
		printf("October: 31 DAYS");
	break;
	case 11:
		printf("November: 30 DAYS");
	break;
	case 12:
		printf("December: 31 DAYS");
	break;
		
	default:
		printf("Enter a valid month number");
	break;
}
return 0;

