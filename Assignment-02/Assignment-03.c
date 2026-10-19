#include <stdio.h>
int main()
{
    int sensor, reading;
    printf("Enter the number of sensors:");
    scanf("%d", &sensor);
    printf("\nEnter the number of hourly readings:");
    scanf("%d", &reading);
    int calc[sensor][reading];
    for (int row = 0; row < sensor; row++)
    {
        for (int column = 0; column < reading; column++)
        {
            printf("Sensor %d -> Reading %d: ", row + 1, column + 1);
            scanf("%d", &calc[row][column]);
        }
        printf("\n");
    }
    float highest_avg = 0;
    int h_sensor = 0;
    for (int i = 0; i < sensor; i++)
    {
        float total = 0;
        float avg = 0;
        int max = 0;
        int min = calc[i][0];
        int critical = 0;
        int warning = 0;
        int streak = 0;
        int longest = 0;

        for (int j = 0; j < reading; j++)
        {
            if (calc[i][j] >= 35)
            {
                streak++;

                if (streak > longest)
                {
                    longest = streak;
                }
            }
            else
            {
                streak = 0;
            }
            if (calc[i][j] >= 40)
            {
                critical++;
            }
            if (calc[i][j] > 35 && calc[i][j] < 39)
            {
                warning++;
            }
            if (max < calc[i][j])
            {
                max = calc[i][j];
            }
            if (min > calc[i][j])
            {
                min = calc[i][j];
            }
            total = total + calc[i][j];
            avg = total / reading;
            if (i == 0 || avg > highest_avg)
            {
                highest_avg = avg;
                h_sensor = i + 1;
            }
        }
        printf("Sensor %d: Total: %.f  Average: %.2f  Max: %d  Min: %d\nCritical: %d  Warning: %d  Longest hot streak: %d", i + 1, total, avg, max, min, critical, warning, longest);
        printf("\n");
    }
    printf("\nHighest average: sensor %d (%f)", h_sensor, highest_avg);

    return 0;
}