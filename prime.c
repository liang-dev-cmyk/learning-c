#include <stdio.h>

int is_prime(int n)
{
    int i = 0;

    if (n < 2)
    {
        return 0;
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[5];
    int i = 0;
    int cnt = 0;

    printf("Enter 5 numbers:  ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (is_prime(a[i]) == 1)
        {
            cnt++;
        }
    }

    printf("Prime: %d\n", cnt);

    return 0;
}
