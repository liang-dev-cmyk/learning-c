#include<stdio.h>

int main(void){
    int score = 0;

    printf("Enter score: ");
    scanf("%d", &score);

    if(score < 0 || score > 100){
        printf("Invalid\n");
    }else if(score >= 90){
        printf("A\n");
    }else if(score >= 80){
        printf("B\n");
    }else if(score >= 70){
        printf("C\n");
    }else if(score >= 60){
        printf("D\n");
    }else{
        printf("F\n");
    }
    
    return 0;
}

