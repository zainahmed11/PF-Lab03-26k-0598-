#include<stdio.h>
int main(){
	int q, i;
	float p, subtotal, d, discounted_amt, t, final_bill;  
	
	for ( i=0 ; i<67 ; i++ ){
	printf("\nEnter the quantity of product purchased: ");
	scanf("%d", &q);
	printf("\nWhat is the price per item?\n");
	scanf("%f", &p);
	printf("\nEnter discount %%: ");
	scanf("%f", &d);
	printf("\nEnter tax %%: ");
	scanf("%f", &t);
	
	subtotal=q*p;
	discounted_amt=subtotal-(subtotal*d)/100;
	final_bill=discounted_amt+(discounted_amt*t)/100;
	
	if(q<0 || p<0 || discounted_amt<0 || t<0){
	printf("Invalid input! Please try again.\n");
	}
	else {
		printf("\n=========================\n");
		printf("      SHOPPING INVOICE"     );
		printf("\n=========================\n");
		printf("\nSubtotal: %.2f", subtotal);
		printf("\nDiscounted Amount: %.2f", discounted_amt);
		printf("\nFinal Amount= %.3f", final_bill);
	}
}
	return 0;
}
