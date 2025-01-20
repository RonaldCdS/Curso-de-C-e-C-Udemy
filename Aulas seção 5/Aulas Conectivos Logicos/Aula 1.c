/*
Exemplo da Aula de Conectivos
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int pessoa1, pessoa2;

    printf("How old are the two persons:");
    scanf("%d", &pessoa1);
    scanf("%d", &pessoa2);

    if (pessoa1 && pessoa2 < 17){
        printf("Problema!");

    }else{
        printf("OK!");
    }
    return 0;
}

//exemplo com ou


/*
Exemplo da Aula de Conectivos
*/



/*int function(){
    int pessoa1, pessoa2;

    printf("How old are the two persons:");
    scanf("%d", &pessoa1);
    scanf("%d", &pessoa2);

    if (pessoa1 || pessoa2 > 17){
        printf("OK!");

    }else{
        printf("Problem!");
    }
    return 0;
}
*/

