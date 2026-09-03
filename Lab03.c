#include <stdio.h>

int main()
{
    int age;
    float height;

    printf("\nEnter your age:");
    scanf("%d", &age);

    printf("\nEnter your height:");
    scanf("%f", &height);

    printf("\nYour age is: %d", age);
    printf("\nYour height is: %.2f", height);

    return 0;
}
