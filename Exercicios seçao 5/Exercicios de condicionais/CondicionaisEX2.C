#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;

    printf("Escolha um numero:");
    scanf("%d", &num1);

    printf("Escolha outro:");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("%d maior que %d", num1, num2);
    }else if(num2 > num1){
        printf("%d maior que %d", num2, num1);
    }else{
        printf("iguais");
    }
    return 0;

}
