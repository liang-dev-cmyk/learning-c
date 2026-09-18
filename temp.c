#include<stdio.h>

int main()
{
    int temp=0;

    printf("Temp in C:\n");
    scanf("%d", &temp);

    int change=temp*9.0/5+32;

    printf("Fahrenheit:%d\n",change);

    return 0;
}  
