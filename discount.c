#include<stdio.h>

int main()
{
    int price=0;

    printf("amount in:\n");
    scanf("%d", &price);

    int final=price*0.8;

    printf("Here is your %d yuan\n",final);

    return 0;
}
