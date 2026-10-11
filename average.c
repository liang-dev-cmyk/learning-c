#include <stdio.h>

int main()
{
    int a[5];
    int i = 0;
    int sum = 0;
    float avg = 0.0;

   printf("Enter 5 number:");
   
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }

    avg = sum / 5.0;
    printf("Average: %.1f\n", avg);

    return 0;
}