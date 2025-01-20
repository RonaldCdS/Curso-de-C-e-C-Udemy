//exercicio de fixacao 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "");

    int num1, num2, num3, resultado;

    printf("Digite tres numeros:");
    scanf("%d %d %d", &num1, &num2, &num3);

    resultado = num1 * num2 * num3;

    printf("O resultado eh %d", resultado);

    return 0;

}
