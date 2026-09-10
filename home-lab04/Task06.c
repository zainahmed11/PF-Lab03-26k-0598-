#include<stdio.h>
int main(){
	int choice, num;
	int i;
	int prime=1;
	printf("\n1. Even/Odd 2. Prime 3. square 4. Exit");
	printf("\nEnter choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n Enter the number: ");
			scanf("%d",&num);
			if (num%2==0)
			printf("\n%d is an even number.",num);
			else printf("\n%d is an odd number.",num);
			break;
		case 2:
			printf("Enter a number: ");
   			 scanf("%d", &num);

    if (num <= 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is not prime.");
    }

			break;
		case 3:
			printf("\nEnter the number: ");
			scanf("%d", &num);
			num=num*num;
			printf("%d",num);
			break;
		case 4:
			printf("\nprogarm ended");
			break;
		default:
			printf("Invalid Menu Choices");
}
return 0;
}
