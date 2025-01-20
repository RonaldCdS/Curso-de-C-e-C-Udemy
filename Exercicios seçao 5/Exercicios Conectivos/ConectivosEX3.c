#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("Choose two numbers:");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > 10 || num2 > 10){
        printf("at least one of them is bigger than 10");

    }else{
        printf("None of these numbers are bigger than 10");
    }

    return 0;
}
