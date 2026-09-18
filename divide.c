#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter a and b:\n");
    scanf("%f,%f",&a,&b);

    float result=a/b;

    printf("Result:%.1f\n",result);

    return 0;
}    
