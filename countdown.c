#include <stdio.h>

int main()
{
    int n = 0;

    printf("Enter n :  ");
    scanf("%d", &n);

    while (n >= 1)
    {
        printf("%d\n", n);
        n--;
    }

    printf("Done\n");

    return 0;
}