#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;

    printf("Choose three numbers and i will tel if them are bigger then ten:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a, b, c  > 10 ){
        printf("These numbers are bigger then 10");
    }else{
        printf("These numbers aren´t bigger then 10");
    }
    return 0;
}
