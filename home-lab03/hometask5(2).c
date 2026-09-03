#include<stdio.h>
int main(){
	char name[67];
	printf("What's your name?:");
	fgets(name,sizeof(name),stdin);
	
	printf("Hey ");
	puts(name);
	return 0;
}
