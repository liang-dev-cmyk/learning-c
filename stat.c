#include <stdio.h>

int main()
{
    int a[5];
    int i = 0;
    int sum = 0;
    int max = 0;
    int min = 0;
    float avg = 0.0;

    printf("Enter 5 number: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];

    for (i = 0; i < 5; i++)
    {
        sum += a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    avg = sum / 5.0;

    printf("Max:%d\n", max);
    printf("Min:%d\n", min);
    printf("Average:%.1f\n", avg);

    return 0;
}
