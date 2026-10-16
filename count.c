#include <stdio.h>

int main()
{

    int a[5];
    int cnt = 0;
    int i = 0;

    printf("Enter 5 numbers:  ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            cnt++;
        }
    }

    printf("Even:%d\n", cnt);

    return 0;
}
