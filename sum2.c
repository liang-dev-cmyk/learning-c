#include <stdio.h>

int main()
{
    int x = 0;
    int sum = 0;

    printf("Enter x:  ");
    scanf("%d", &x);

    while (x != 0)
    {
        sum += x;
        scanf("%d", &x);
    }

    printf("Sum: %d\n", sum);

    return 0;
}
