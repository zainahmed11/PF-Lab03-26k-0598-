#include <stdio.h>
int main(){
    int cat, amt,num, ccat, del, dis_per, fin_amt,process,total;
    int del_charge=0;
    int priority_del=0;
    printf("\nProduct Category\n1.Electronics\n2.Clothing\n3.Books\n4.Household\n");
    scanf("%d", &cat);
    printf("\nCustomer Category\n1.Regular\n2.Premium\n3.Corporate\n");
    scanf("%d", &ccat);
    printf("\nEnter Order Number: ");
    scanf("%d", &num);
    printf("\nEnter Order Amount: ");
    scanf("%d", &amt);
    printf("\nEnter delivery distance: ");
    scanf("%d", &del);

    switch (cat)
    {
    case 1:
            switch (ccat)
            {
            case 1:
            dis_per=5;
                break;
            
            case 2:
            dis_per=10;
                break;
            
            case 3:
            dis_per=15;
                break;
            }
        break;

    case 2:
        switch (ccat)
            {
            case 1:
            dis_per=10;
                break;
            
            case 2:
            dis_per=15;
                break;
            
            case 3:
            dis_per=20;
                break;
            }
        break;

    case 3:
        switch (ccat)
            {
            case 1:
            dis_per=8;
                break;
            
            case 2:
            dis_per=12;
                break;
            
            case 3:
            dis_per=18;
                break;
            }
        break;

    case 4:
        switch (ccat)
            {
            case 1:
            dis_per=7;
                break;
            
            case 2:
            dis_per=14;
                break;
            
            case 3:
            dis_per=20;
                break;
            }
        break;
        
    }
    fin_amt = amt - (amt * dis_per / 100);
    if (fin_amt>=5000 || ccat == 2 || ccat == 3)
    {
        printf("\nYOU GOT FREE SHIPPING");
    }
    else {
        del_charge=del*50;//50 is the delivery charge per km
    }

    if ((ccat==2 || ccat==3)  && amt>=10000)
    {
        priority_del=500;
    }
    process=num%4;
    
    printf("\n======FINAL REPORT======");
    if (cat ==1)
    {
        printf("\nPRODUCT CATEGORY: ELECTRONICS");
    }
    else if (cat ==2)
    {
        printf("\nPRODUCT CATEGORY: CLOTHING");
    }
    else if (cat ==3)
    {
        printf("\nPRODUCT CATEGORY: BOOKS");
    }
    else if (cat ==4)
    {
        printf("\nPRODUCT CATEGORY: HOUSEHOLD");
    }
    
    if (ccat==1)
    {
        printf("\nCUSTOMER CATEGORY: REGULAR");
    }
    else if (ccat==2)
    {
        printf("\nCUSTOMER CATEGORY: PREMIUM");
    }
    else if (ccat==3)
    {
        printf("\nCUSTOMER CATEGORY: CORPORATE");
    }
    printf("\n ORDER AMOUNT: %d", amt);
    printf("\nDISCOUNT %%: %d", dis_per);
    printf("\nFINAL PAYABLE AMOUNT: %d", fin_amt);
    printf("\nDELIVERY DISTANCE: %d", del);
    printf("\n DELIVERY CHARGES: %d", del_charge);
    if (process==0)
    {
        printf("\nProcessing Group A");
    }
    else if (process==1)
    {
        printf("\nProcessing Group B");
    }
    else if (process==2)
    {
        printf("\nProcessing Group C");
    }
    else if (process==3)
    {
        printf("\nProcessing Group D");
    }

    total=fin_amt+ del_charge+ priority_del;
    printf("\nTOTAL AMOUNT : %d", total);
}