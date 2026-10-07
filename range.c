#include<stdio.h>

int main()
{
    int number = 0;
    printf("Enter a number:  ");
    scanf("%d", &number);

if( number >=10 && number <=20){
    printf("In\n");
}else {
    printf("Out\n");
}

return 0;
}