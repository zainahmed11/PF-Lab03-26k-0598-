#include<stdio.h>
int main(){
	int season, r_type, nights, rate;
	float discount, total_price, final_price, total_rev;
	printf("WELCOME!\nSeason:\n1.Peak\n2.Off-Peak\n");
	scanf("%d",&season);
	printf("\nRoom Type:\n1.Standard\n2.Deluxe\n3.Suite\n");
	scanf("%d",&r_type);
	printf("\nNumber of nights: ");
	scanf("%d",&nights);
	
	switch(season){
		case 1:
			if(r_type==1){
			rate=5000;
			if(nights>7){
				discount=15;
			}
			else {
				discount=0;}}
				
			else if(r_type==2){
			rate=8000;
			if(nights>7){
				discount=15;
			}
			else {
				discount=0;}}
				
			else if(r_type==3){
			rate=12000;
			if(nights>7){
				discount=15;}
			else {
				discount=0;}}
			
			total_price=(rate*nights);
			final_price=total_price*(1-discount/100);
			printf("Total Amount: %.2f",final_price);
			total_rev=final_price;
			printf("\nTotal Revenue: %.2f", total_rev);
		break;
		
		case 2:
			if(r_type==1){
			rate=3000;
			if(nights>7){
				discount=15;
			}
			else {
				discount=0;}}
				
			else if(r_type==2){
			rate=5000;
			if(nights>7){
				discount=15;
			}
			else {
				discount=0;}}
				
			else if(r_type==3){
			rate=8000;
			if(nights>7){
				discount=15;}
			else {
				discount=0;}}
			
			total_price=(rate*nights);
			final_price=total_price*(1-discount/100);
			printf("Total Amount: %.2f",final_price);
			total_rev=final_price;
			printf("\nTotal Revenue: %.2f", total_rev);
		break;
		
		default:
			printf("\nEnter valid information");
	}
		return 0;
}
