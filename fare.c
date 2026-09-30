#include<stdio.h>

int main()
{
    const int TICKET=2;
    int Change=0;
    printf("Paid: ");
    scanf("%d", &Change);
    
    int final=Change-TICKET;

    printf("Here is your %d yuan\n",final);

    return 0;
}  