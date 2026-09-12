#include<stdio.h>
int main(){
	int i, vehicle, permit, emergency;
	char type, user;
	int zonea=0;
	int zoneb=0;
	int zonec=0;
		
	printf("\nEnter the number of vehicle: ");
	scanf("%d", &vehicle);
	
	for(i=0;i<vehicle;i++){
	printf("\nEnter the type of vehicle:\nCar(C)\nBike(B)\nVan(V)\n");
	scanf(" %c",&type);
	printf("\nEnter the user category:\nFaculty(F)\nStudent(S)\nVisitor/Guest(G)\n");
	scanf(" %c",&user);
	printf("\nIs parking permit available?\n1.yes\n2.No\n");
	scanf(" %d",&permit);
	
	if (permit==1){
		switch(user){
		case 'f':
		case 'F':
			switch(type){
				case 'v':
				case 'V':
					printf("\n Use Zone A");
					break;
				case 'b':
				case 'B':
					printf("\nUse Zone A");
					break;
				case 'c':
				case 'C':
					printf("\n Use Zone A");
					break;
				
			}
			break;
		case 's':
		case 'S':
			switch(type){
				case 'v':
				case 'V':
					printf("\n Use Zone C");
					break;
				case 'b':
				case 'B':
					printf("\nUse Zone B");
					break;
				case 'c':
				case 'C':
					printf("\n Use Zone C");
					break;
				
				
					
			}
			break;
		case 'g':
		case 'G':
			switch(type){
				case 'c':
				case 'C':
				case 'B':
				case 'b':
					printf("\nUse Zone C");
					break;
				case 'v':
				case 'V':
					printf("\nUse Zone C");
					break;
					
			}
			break;
		default:
			printf("error");
			
	}}
		else {
		printf("\nIs it an emergency vehicle?\n1.Yes\n2.No\n");
		scanf("%d", &emergency);
		switch (emergency){
		case 1:
			switch(type)
			case'v':
			case 'V':
			case'c':
			case 'C':
			case'b':
			case 'B':
				printf("\nUse Zone C");
				break;
		case 2:
			printf("\nParking Not Allowed");
			break;
			}
			zonea++;
			zoneb++; 
			zonec++;}
			printf("\nTotal Numbers Of Vehicle: %d", vehicle);
			printf("\nOccupied space of Zone A:%d Zone B:%d and Zone C:%d",zonea,zoneb,zonec);
}
}
