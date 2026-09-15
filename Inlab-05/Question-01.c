#include<stdio.h>
int main(){
	int cat, type, baggage, your_baggage, v_cat;
	char doc;
	printf("\nPassenger category:\n1.Adult\n2.Student\n3.Senior Citizen\n");
	scanf("%d", &cat);
	printf("\n1.Domestic flight\n2.International flight\n");
	scanf("%d", &type);
	printf("\nEnter your luggage weight:");
	scanf("%d", &your_baggage);
	printf("\nIs your documents valid?(V/N)\n");
	scanf(" %c", &doc);
	
	if (doc == 'v' || doc == 'V'){
		printf("\nYour documents are valid");
	}
	else {
	printf("\nYour documents are not valid");
}
	switch(type){
		case 1:
			switch(cat){
				case 1://adult
					baggage=20;
					if(doc != 'v' && doc != 'V'){
				
					printf("\nDocuments are invalid");}
					else if(your_baggage<=baggage && (doc=='v'|| doc=='V')){
						printf("\nNormal boarding");
					}
					else if(your_baggage>=baggage && (doc=='v'|| doc=='V') ){
					printf("\nEnhance baggage");
					}
					break;
				case 2://students
					baggage=25;
					if(doc != 'v' && doc != 'V'){
						printf("\nDocuments are invalid");}
					else if(your_baggage<=baggage && (doc=='v'|| doc=='V')){
						printf("\nNormal boarding");
					}
					else if(your_baggage>=baggage && (doc=='v'|| doc=='V') ){
					printf("\nEnhance baggage");
					}
					break;
				case 3://senior citizen
					baggage=30;
					if(doc != 'v' && doc != 'V'){
					printf("\nDocuments are invalid");}
					else if(your_baggage<=baggage && (doc=='v'|| doc=='V')){
						printf("\nNormal boarding");
					}
					else if(your_baggage>=baggage && (doc=='v'|| doc=='V') ){
					printf("\nEnhance baggage");
					}
					break;
			}		
			break;
		case 2:
			switch(cat){
				case 1:
					baggage=30;
					if(doc != 'v' && doc != 'V')
					printf("\nDocuments are invalid");
					else if(your_baggage<=baggage && (doc=='v'|| doc=='V')){
						printf("\nNormal boarding");
					}
					else if(your_baggage>=baggage && (doc=='v'|| doc=='V') ){
					printf("\nEnhance baggage");
					}
					break;
				case 2:
					baggage=35;
					if(doc != 'v' && doc != 'V')
					printf("\nDocuments are invalid");
					else if(your_baggage<=baggage && (doc=='v'|| doc=='V')){
						printf("\nNormal boarding");
					}
					else if(your_baggage>=baggage && (doc=='v'|| doc=='V') ){
					printf("\nEnhance baggage");
					}
					break;
				case 3:
					baggage=40;
					if(doc != 'v' && doc != 'V')
					printf("\nDocuments are invalid");
					else if(your_baggage<=baggage && (doc=='v'|| doc=='V')){
						printf("\nNormal boarding");
					}
					else if(your_baggage>=baggage && (doc=='v'|| doc=='V') ){
					printf("\nEnhance baggage");
					}
					break;
			break;
				}
				
		v_cat=your_baggage%5;
	
	
	printf("\n==================================");
	printf("\n        BOARDING SUMMARY");
	printf("\n==================================");
	switch (cat){
		case 1:
		printf("\nPASSENGER CATEGORY: Adult");
		break;
		case 2:
		printf("\nPASSENGER CATEGORY: Student");
		break;
		case 3:
		printf("\nPASSENGER CATEGORY: Senior citizen");
		break;
		
	}
	switch(type){
		case 1:
		printf("\nDESIGNATION TYPE: Domestic");
		break;
		case 2:
		printf("\nDESIGNATION TYPE: International");
		break;
	}
	printf("\nPERMITTED BAGGAGE ALLOWANCE: %d", baggage);
	printf("\nACTUAL BAGGAGE WEIGHT: %d", your_baggage);
	if (doc == 'v' || doc == 'V'){
		printf("\nDOCUMENT STATUS: VALID");
	}
		else printf("\nDOCUMENT STATUS: INVALID");
		
		switch (v_cat){
		case 0:
			printf("\nVERIFICATION CATEGORY: A");
			break;
		case 1:
			printf("\nVERIFICATION CATEGORY: B");
			break;
		case 2:
			printf("\nVERIFICATION CATEGORY: C");
			break;
		case 3:
			printf("\nVERIFICATION CATEGORY: D");
			break;
		case 4:
			printf("\nVERIFICATION CATEGORY: E");
			break;
			
	}
		if (cat == 3 || (cat == 2 && type == 2)){
	printf("\nPRIORITY ASSISTANCE STATUS: Priority");
}
else printf("\nPRIORITY ASSISTANCE STATUS: NOT APPLICABLE");
	
}}
