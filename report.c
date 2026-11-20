#include <stdio.h>

int max_of(int a[], int n)
{
    int i = 0;
    int m = 0;

    m = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    return m;
}

int count_pass(int a[], int n)
{
    int i = 0;
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 60)
        {
            cnt++;
        }
    }

    return cnt;
}
float avg_of(int a[], int n)
{
    int i = 0;
    int sum = 0;
    float avg = 0;

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    avg = sum / 5.0;
    return avg;
}
int main()
{
    int a[5];
    int i = 0;

    printf("Enter 5 numbers :   ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Max:%d\n ", max_of(a, 5));
    printf("Pass:%d\n ", count_pass(a, 5));
    printf("Average:%.1f\n ", avg_of(a, 5));

    return 0;
}