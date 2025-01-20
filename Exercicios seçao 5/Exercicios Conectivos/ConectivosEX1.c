#include <stdio.h>
#include <stdlib.h>

int main(){
    int count;

        printf("Choose a number:");
        scanf("%d", &count);

        if(count >= 0 && count <=10){
            printf("The number %d is between 0 and 10", count);

        }else{
            printf("The number %d isn't between 0 and 10", count);
        }

        return 0;
}
