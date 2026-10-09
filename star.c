#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int j = 0;

    printf("Enter n:  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}