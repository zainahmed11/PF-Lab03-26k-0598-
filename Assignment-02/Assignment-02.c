#include <stdio.h>

int main()
{
    int num;
    int pairs = 0;

    printf("Enter a number:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int sum1 = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum1 = sum1 + j;
            }
        }

        if (sum1 > i && sum1 <= num)
        {
            int sum2 = 0;

            for (int j = 1; j < sum1; j++)
            {
                if (sum1 % j == 0)
                {
                    sum2 = sum2 + j;
                }
            }

            if (sum2 == i)
            {
                printf("(%d, %d)\n", i, sum1);
                pairs++;
            }
        }
    }

    printf("Total amicable pairs: %d\n", pairs);

    return 0;
}