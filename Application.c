#include<stdio.h>
int main(){
	char name[67];
	char rollnumber[67];
	int age,assignments_done,total_assignments;
	float marks1,marks2,marks3,attendance_percentage;
	
	printf("\n================================");
	printf("\n   STUDENT ACADEMIC ADVISOR");
	printf("\n================================");
	printf("\nEnter student name      : ");
	scanf("%s",&name);
	printf("Enter roll number       : ");
	scanf("%s",&rollnumber);
	printf("Enter age               : ");
	scanf("%i",&age);
	printf("Enter Programming marks : ");
	scanf("%f",&marks1);
	printf("Enter Mathematics marks : ");
	scanf("%f",&marks2);
	printf("Enter English marks     : ");
	scanf("%f",&marks3);
	printf("Enter attendance(%%)     : ");
	scanf("%f",&attendance_percentage);
	printf("Enter assignments done  : ");
	scanf("%d",&assignments_done);
	printf("Enter total assignments : ");
	scanf("%d",&total_assignments);
	printf("\n--------------------------------");
	printf("\n       ACADEMIC REPORT  ");
	printf("\n--------------------------------");
	printf("\nStudent         : %s",name);
	printf("\nRoll Number     : %s",rollnumber);
	printf("\nAge             : %i",age);
	int total_marks = marks1+marks2+marks3;
	printf("\nTotal Marks     : %i/300",total_marks);
	float avg=total_marks/3;
	printf("\nAverage         : %.2f",avg);
	if (avg>=90)
	printf("\nGrade           : A");
	else if (avg>=80 && avg<90)
	printf("\nGrade           : B");
	else if (avg>=70 && avg<80)
	printf("\nGrade           : C");
	else if (avg>=60 && avg<70)
	printf("\nGrade           : D");
	else if (avg>=50 && avg<60)
	printf("\nGrade           : E");
	else if (avg<50)
	printf("\nGrade           : F");
	printf("\nAttendance      : %.2f%%",attendance_percentage);
	float assignments=(assignments_done*100)/total_assignments;
	printf("\nAssignments     : %.2f%%",assignments);
	if(avg>=50)
	printf("\nStatus          : PASS");
	else printf("\nStatus          : FAIL");
	int min_attendancepercentage=75;
	if(attendance_percentage>=min_attendancepercentage)
	printf("\nAttendance      : GOOD");
	else printf("\nAttendance      : BAD");
	int scholarship;
	if(avg>=80 && attendance_percentage>=80)
	printf("\nScholarship     : ELIGIBLE");
	else printf("\nScholarship     : NOT ELIGIBLE");
	if (total_marks>=80 && attendance_percentage>80 && assignments_done>80)
	printf("\nAdvice : \nExcellent performance! Keep up the hard work and continue aiming for your goals.");
	else if(total_marks<=80 && attendance_percentage<80 && assignments_done<80)
	printf("\nAdvice : \nYou are doing well, but try to improve and work on your weak areas and practice regularly.");
	printf("\n================================");
	printf("\n        END OF REPORT");
	printf("\n================================");
	return 0;
}
