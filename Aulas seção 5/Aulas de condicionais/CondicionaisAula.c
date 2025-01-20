#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if(idade > 17){
        printf("Acesso Liberado!");

    }else{
        printf("Acesso negado!");
    }
    return 0;
}
