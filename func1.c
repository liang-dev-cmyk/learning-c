#include <stdio.h>

int max_of(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int min_of(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int m = 0;
    int n = 0;

    printf("Enter 3 numbers:  ");
    scanf("%d %d %d", &x, &y, &z);

    m = max_of(max_of(x, y), z);
    n = min_of(min_of(x, y), z);

    printf("Max:%d\n", m);
    printf("Min:%d\n", n);

    return 0;
}