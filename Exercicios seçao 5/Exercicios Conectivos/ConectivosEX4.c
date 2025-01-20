#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;

    printf("Choose two numbers:");
    scanf("%d %d", &num1, &num2);

    if(num1 %2 == 0 || num2 %2 ==0){
        printf("At least one number is even");
    }else{
        printf("None of these numbers are even");
    }

    return 0;
}
