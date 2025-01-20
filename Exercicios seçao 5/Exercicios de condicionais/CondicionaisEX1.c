//Exercicio 1 Condicionais

#include <stdio.h>
#include <stdlib.h>

    int main(){

    int a, b;

    int soma = a + b;

    printf("Digite um valor:");
    scanf("%d", &a);

    printf("Digite um segundo valor:");
    scanf("%d", &b);

    printf("A soma de %d e %d eh igual %d", a, b, a + b);

    if(soma >= 10){
        printf("\nA soma eh maior ou igual a dez");

    }else{
        printf("\nA soma eh menor que dez");
    }

    return 0;
}
