#include<stdio.h>
int main(){
	int permission=0;
	int door_lock=1;
	int alarm=2;
	int CCTV=4;
	int sensor=8;
	int oper, choice, mode;
	
	printf("====SMART HOME SECURITY CONTROLLER====\n");
	printf("Select the operation\n1.activate a device\n2.deactivate a device\n3.status of a device\n4.toggle a device\n5.Emergency security modes\n");
	scanf("%d", &oper);
	
	switch(oper){
		case 1:
			printf("\nSelect a device for activation\n1.main door lock\n2.alarm system\n3.CCTV camera\n4.motion sensor\n");
			scanf("%d", &choice);
				switch(choice){
					case 1:
						permission= permission | door_lock;
						printf("\nMAIN DOOR LOCKED");
						break;
						
					case 2:
						permission= permission | alarm;
						printf("\nALARM SYSTEM ACTIVATED");
						break;
						
					case 3:
						permission= permission | CCTV;
						printf("\nCCTV Cameras ACTIVATED");
						break;
						
					case 4:
						permission= permission | sensor;
						printf("\n MOTION SENSOR ACTIVATED");
						break;
				}
			break;
		
		case 2:
			printf("\nSelect a device for deactivation\n1.main door lock\n2.alarm system\n3.CCTV camera\n4.motion sensor\n");
			scanf("%d", &choice);
				switch(choice){
					case 1:
						permission= permission &~door_lock;
						printf("\nMAIN DOOR LOCK DEACTIVATED");
						break;
						
					case 2:
						permission= permission &~alarm;
						printf("\nALARM SYSTEM DEACTIVATED");
						break;
						
					case 3:
						permission= permission &~CCTV;
						printf("\nCCTV Cameras DEACTIVATED");
						break;
						
					case 4:
						permission= permission &~sensor;
						printf("\n MOTION SENSOR DEACTIVATED");
						break;
				}
			break;
		
		case 3:
			printf("\nSelect a device to check the status\n1.main door lock\n2.alarm system\n3.CCTV camera\n4.motion sensor\n");
			scanf("%d", &choice);
				switch(choice){
					case 1:
						if (permission & door_lock)
  						  printf("Door Lock is Active");
						else
  						  printf("Door Lock is Inactive");
						break;
						
					case 2:
						if (permission & alarm)
  						  printf("Alarm system is Active");
						else
  						  printf("Alarm system is Inactive");
						break;
						
					case 3:
						if (permission & CCTV)
  						  printf("CCTV cameras are Active");
						else
  						  printf("CCTV cameras are Inactive");
						break;
						
					case 4:
						if (permission & sensor)
  						  printf("Motion sensor is Active");
						else
  						  printf("Motion sensor is Inactive");
						break;
				}
			break;
			
		case 4:
			printf("\nSelect a device to toggle\n1.main door lock\n2.alarm system\n3.CCTV camera\n4.motion sensor\n");
			scanf("%d", &choice);
			switch(choice){
					case 1:
						permission= permission ^door_lock;
						break;
						
					case 2:
						permission= permission ^ alarm;
						break;
						
					case 3:
						permission= permission ^ CCTV;
						break;
						
					case 4:
						permission= permission ^ sensor;
						break;
			break;
				}
		case 5:
				printf("\n====SECURITY MODES====\n");
	printf("1.home mode\n2.away mode\n3.night mode\n");
	scanf("%d", &mode);
	switch (mode){
		case 1:
			permission = permission | door_lock | CCTV;
			printf("MAIN DOOR LOCKED AND CCTV CAMERAS ARE ACTIVATED");
			break;
		case 2:
			permission = permission | door_lock | alarm | CCTV | sensor;
			printf("ALL SECURITY DEVICES ARE ACTIVATED");
			break;
		case 3:
			permission = permission | door_lock | alarm | sensor;
			printf("MAIN DOOR LOCKED. ALARM SYSTEM AND MOTION SENSOR IS ACTIVATED");
			break;
	}
			break;
		default:
			printf("\nEnter a valid option");
		}
		printf("\n====STATUS INFORMATION====\n");
		if (permission & door_lock)
  		  printf("Door Lock is Active\n");
		else
  			printf("Door Lock is Inactive\n");
  			
  		if (permission & alarm)
  			printf("Alarm system is Active\n");
		else
  			printf("Alarm system is Inactive\n");
  		
  		if (permission & CCTV)
  			printf("CCTV cameras are Active\n");
		else
  			printf("CCTV cameras are Inactive\n");
  			
  		if (permission & sensor)
  			printf("Motion sensor is Active\n");
		else
  			printf("Motion sensor is Inactive\n");
	}
