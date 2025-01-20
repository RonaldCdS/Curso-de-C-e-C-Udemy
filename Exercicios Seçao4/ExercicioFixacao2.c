//exercicio fixacao 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "");

    float nota1, nota2;

    printf("\nDigite a primeira nota:");
    scanf("%f", &nota1);


    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    printf("\nO valor absoluto da diferença entre %.2f e %.2f eh igual a %.2f", nota1, nota2, fabs(nota1 - nota2));


    return 0;
}
