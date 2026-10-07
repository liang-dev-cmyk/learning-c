#include <stdio.h>

int main()
{
    int x = 0;
    int max = 0;

    printf("Enter a number :  ");
    scanf("%d", &x);
    max = x;

    while (x != 0)
    {
        if (x > max)
        {
            max = x;
        }
        scanf("%d", &x);
    }
    printf("Max: %d\n", max);

    return 0;
}