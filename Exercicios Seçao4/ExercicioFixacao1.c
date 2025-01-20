// exercicio num 1

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");
    int y, z;


    printf("\nDigite o valor da primeira nota:");
    scanf("%d", &y);

    printf("\nDigite o valor da segunda nota: ");
        scanf("%d", &z);

    printf("\nA media entre %d e %d eh %d", y, z, (y + z) / 2);


    return 0;
}
