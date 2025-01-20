#include <stdio.h>
#include <locale.h>

int main() {
    // Permite usar acentos
    setlocale(LC_ALL, "");

    // Imprime Olá
    printf("Olá \n");

    // Lendo valor inteiro
    int a = 50;
    printf("O valor inicial de a é = %d \n", a);
    printf("Digite um novo valor para a: ");
    scanf("%d", &a);
    printf("O valor de a mudou para %d\n", a);

    // Lendo valor quebrado
    float b = 5.5;
    printf("O valor inicial de b é = %.2f \n", b);
    printf("Digite um novo valor para b: ");
    scanf("%f", &b);
    printf("O valor de b mudou para %.2f\n", b);

    // Lendo letra
    char letra = 't';
    printf("O valor inicial de c é = %c \n", letra);
    printf("Digite um novo caractere para c: ");
    getchar(); // Limpa o buffer após scanf
    scanf("%c", &letra);
    printf("O valor de c mudou para %c\n", letra);

    return 0;
}

