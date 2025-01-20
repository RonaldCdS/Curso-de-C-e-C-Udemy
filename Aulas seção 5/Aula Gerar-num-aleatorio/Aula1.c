//Gerando numero aleatorio

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int r = (rand() % 10;) + 5;

    printf("Generated number: %d", r);

    return 0;


}
