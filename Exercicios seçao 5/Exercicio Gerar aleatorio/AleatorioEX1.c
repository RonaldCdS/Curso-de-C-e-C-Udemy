#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int max = 6;
    int min = 1;


    int roll1 = (rand() % (max - min + 1)) + min;
    int roll2 = (rand() % (max - min + 1)) + min;
    int roll3 = (rand() % (max - min + 1)) + min;


    int sum = roll1 + roll2 + roll3;


    printf("The dice rolls are: %d, %d, and %d\n", roll1, roll2, roll3);
    printf("The sum of the rolls is: %d\n", sum);

    return 0;
}

