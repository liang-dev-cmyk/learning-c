#include<stdio.h>

void print_array(int a[], int n)
{
    int i = 0;
    for(i = 0;i < n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void double_all(int a[],int n)
{
    int i = 0;
    for ( i = 0; i < n; i++)
    {
        a[i] = a[i] * 2;
    }
}

int main()
{
    int a[5];
    int i = 0;

    printf("Enter 5 numbers:");

    for(i = 0;i < 5;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before:  ");
    print_array(a,5);

    double_all(a,5);

    printf("After:   ");
    print_array(a,5);

    return 0;

}
















