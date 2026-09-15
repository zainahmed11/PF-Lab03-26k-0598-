#include<stdio.h>

int main(){
	int dep, age, heart_rate, temp, lvl, severity, emergency, critical, senior, alert, case_cat;
	
	printf("1.General Emergency\n2.Cardiology\n3.Neurology\n4.Trauma\n");
	scanf("%d",&dep);
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	printf("Enter heart rate: ");
	scanf("%d",&heart_rate);
	
	printf("Enter temperature: ");
	scanf("%d",&temp);
	
	printf("1.Conscious\n2.Unconscious\n");
	scanf("%d",&lvl);
	
	printf("1.High Severity\n2.Low Severity\n");
	scanf("%d",&severity);
	
	emergency=0;
	
	switch(dep){
		case 1:
			switch(lvl){
				case 1:
					break;
				case 2:
					break;
			}
			break;
			
		case 2:
			switch(lvl){
				case 1:
					if(heart_rate<50 || heart_rate>120)
						emergency=1;
					break;
				case 2:
					if(heart_rate<50 || heart_rate>120)
						emergency=1;
					break;
			}
			break;
			
		case 3:
			switch(lvl){
				case 1:
					break;
				case 2:
					emergency=1;
					break;
			}
			break;
			
		case 4:
			switch(severity){
				case 1:
					emergency=1;
					break;
				case 2:
					break;
			}
			break;
	}
	
	critical=((heart_rate<50 || heart_rate>120) && lvl==2);
	senior=(age>=65);
	alert=(temp<36 || temp>38);
	
	case_cat=(age+heart_rate)%4;
	
	printf("\nDepartment Emergency: %s",emergency ? "Yes" : "No");
	printf("\nCritical: %s",critical ? "Yes" : "No");
	printf("\nSenior Priority: %s",senior ? "Yes" : "No");
	printf("\nTemperature Alert: %s",alert ? "Yes" : "No");
	
	switch(case_cat){
		case 0:
			printf("\nCase Category A");
			break;
		case 1:
			printf("\nCase Category B");
			break;
		case 2:
			printf("\nCase Category C");
			break;
		case 3:
			printf("\nCase Category D");
			break;
	}
	
	if(critical)
		printf("\nFinal Decision: Immediate Medical Attention");
	else if(emergency || senior || alert)
		printf("\nFinal Decision: Priority Further Assessment");
	else
		printf("\nFinal Decision: Routine Medical Assessment");
	
	return 0;
}
