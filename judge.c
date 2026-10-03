#include <stdio.h>

int main(void){
    int X= 0;

    printf("Enter a number: ");
    scanf("%d", &X);

    if(X > 0){
        printf("Positive\n");
    }else if(X < 0){
        printf("Negative\n");
    }else{
        printf("Zero\n");
    }

    return 0;
}