#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, soma;

    printf("Choose two fucking numbers:");
    scanf("%d %d", &num1, &num2);
    soma = num1 + num2;

    if((soma < 11 && soma >=0) ||( soma %2==0 )){
        printf("This number is between 0 and 10 or it's even");

    }else if(num1 + num2 %2 == 0){
        printf("This number is even");

    }else{
        printf("It is not even and not between 0 and 10");
    }

    return 0;
}
