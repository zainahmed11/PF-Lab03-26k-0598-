
#include <stdio.h>
int main()
{
    int days, order, order_amt;
    printf("\nEnter the number of festival days(1-7): ");
    scanf("%d", &days);
    while (days < 1 || days > 7)
    {
        printf("\nEnter the number of festival days(1-7): ");
        scanf("%d", &days);
    }

    float daily_total[7];
    float daily_avg[7];
    int daily_max[7];

    float total_all = 0;
    float highest_daily_sales = 0;
    int highest_day = 0;

    for (int i = 1; i <= days; i++)
    {
        float sum = 0;
        float avg = 0;
        int max = 0;

        printf("\nEnter the number of orders: ");
        scanf("%d", &order);
        printf("\nDay %d - Number of orders: %d ", i, order);

        for (int j = 1; j <= order; j++)
        {
            printf("\nOrder amount: ");
            scanf("%d", &order_amt);

            while (order_amt < 0)
            {
                printf("\nInvalid Amount! Enter again: ");
                scanf("%d", &order_amt);
            }

            if (order_amt > max)
            {
                max = order_amt;
            }

            sum = sum + order_amt;
            avg = sum / order;
        }

        total_all = total_all + sum;

        daily_total[i - 1] = sum;
        daily_avg[i - 1] = avg;
        daily_max[i - 1] = max;

        if (i == 1 || sum > highest_daily_sales)
        {
            highest_daily_sales = sum;
            highest_day = i;
        }

        printf("\nDay %d -> Total sales: %.f  Average Order: %.2f  Highest Order: %d\n",
               i, sum, avg, max);
    }

    printf("\n==== FESTIVAL SUMMARY ====\n");
    printf("Total Festival Sales: %.2f\n", total_all);
    printf("Day with highest sales: Day %d\n", highest_day);
    printf("Highest daily sales: Rs. %.2f\n", highest_daily_sales);

    printf("\n==== DAILY SALES BAR CHART ====\n");
    for (int i = 0; i < days; i++)
    {
        printf("Day %d: ", i + 1);

        for (int j = 0; j < (int)(daily_total[i] / 200); j++)
        {
            printf("*");
        }

        printf(" (Rs. %.2f)\n", daily_total[i]);
    }

    return 0;
}
