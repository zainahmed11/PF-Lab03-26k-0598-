#include <stdio.h>
int main (){
    int dep,tm,pm,att_per,cat;
    printf("\nSelect the department\n1.Computer Science\n2.Electrical Engineering\n3.Bussiness Administration\n4.Mathematics\n");
    scanf("%d", &dep);
    printf("\nEnter student's total marks in theroy examinations: ");
    scanf("%d", &tm);
    printf("\nEnter student's total marks in practical examinations: ");
    scanf("%d", &pm);
    printf("\nEnter student's attendance %%: ");
    scanf("%d", &att_per);
    cat=tm/3;

    printf("\n======FINAL REPORT======\n");
    if (dep==1)
    {
        printf("\nSELECTED DEPARTMENT: COMPUTER SCIENCE");
    }
    else if (dep==2)
    {
        printf("\nSELECTED DEPARTMENT: ELECTRICAL ENGINEERING");
    }
    else if (dep==3)
    {
        printf("\nSELECTED DEPARTMENT: BUSSINESS ADMINISTRATION");
    }
    else if (dep==4)
    {
        printf("\nSELECTED DEPARTMENT: MATHEMATICS");
    }

    printf("\nTHEORY MARKS: %d", tm);
    printf("\nPRACTICAL MARKS: %d", pm);
    printf("\nATTENDANCE %%: %d", att_per);
    if (tm>=85 && pm>=80 && att_per>=90)
    {
        printf("\nDISTINCTION: ELIGLIBLE");
    }
    else printf("\nDISTINCTION: NOT-ELIGIBLE");
    if (cat == 0)
    {
        printf("\nSEAT CATEGORY: A");
    }
    else if (cat == 1)
    {
        printf("\nSEAT CATEGORY: B");
    }
    else if (cat == 2)
    {
        printf("\nSEAT CATEGORY: C");
    }
    switch (dep)
    {
        case 1:
        if (tm>=50 && pm>=40 && att_per>=75)
        {
            printf("\nStatus: PASS");
        }
        else printf("\nStatus: FAIL");
            break;

        case 2:
        if (tm>=55 && pm>=45 && att_per>=75)
        {
            printf("\nStatus: PASS");
        }
        else printf("\nStatus: FAIL");
            break;

        case 3:
        if (tm>=50 && pm>=35 && att_per>=80)
        {
            printf("\nStatus: PASS");
        }
        else printf("\nStatus: FAIL");
            break;
            
        case 4:
        if (tm>=60 && pm>=40 && att_per>=75)
        {
            printf("\nStatus: PASS");
        }
        else printf("\nStatus: FAIL");
            break;
    
    default:
    printf("\nERROR, Please select from the following departments");
        break;
    }

}