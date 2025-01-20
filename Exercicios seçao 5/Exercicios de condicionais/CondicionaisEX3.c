#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;

    printf("Choose a number and i will say if it is even or odd!:");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("Even Number");
    }else{
        printf("Odd Number");
    }
    return 0;
}
