#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, soma, sub;

    printf("\nEscolha uma das opções abaixo:");
    printf("\n 1 - Somar");
    printf("\n 2 - Subtrair");

    int opcao;
    scanf("%d", &opcao);

    printf("\nChoose a value:");
    scanf("%d", &num1);
    printf("\nChoose a second value:");
    scanf("%d", &num2);
    soma = num1 + num2;
    sub = num1 - num2;

    switch(opcao){
        case 1:
            printf("\nA soma e igual a: %d", soma);
            break;
        case 2:
            printf("\nA subtraçao e igual a: %d",sub);
            break;
        default:
            printf("Invalid Option!");
            break;


    }
    return 0;




}
