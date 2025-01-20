#include <stdio.h>  // Para printf
#include <stdlib.h> // Para system
#include <locale.h> // Para setlocale

int main() {
    setlocale(LC_ALL, ""); // Configura o uso de acentos no console

    int a = 6, b = 4;
    printf("\nA soma de %d e %d = %d\n", a, b, a + b);

    int c = 100, d = 50;
    printf("A multiplicação de %d e %d é igual a = %d\n", c, d, c * d);

    system("pause"); // Apenas para Windows
    return 0; // Retorna 0 para indicar execução bem-sucedida
}
