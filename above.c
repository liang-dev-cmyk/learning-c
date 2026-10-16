#include <stdio.h>

int main()
{
    int a[5];
    int i = 0;
    int sum = 0;
    int cnt = 0;
    float avg = 0.0;

   printf("Enter 5 numbers:  ");
   
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / 5.0;

    for (i = 0; i < 5; i++)
    {
        if (a[i] > avg)
        {
            cnt++;
        }
    }

    printf("Average: %.1f\n", avg);
    printf("above:%d\n", cnt);

    return 0;
}