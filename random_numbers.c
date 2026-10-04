#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main(){

    srand(time(NULL));

    printf("%d", RAND_MAX);
    printf("\n");
    int max = 120;
    int min = 100;
    int number = (rand() % (max - min)) + min;

    printf("%d", number);

    return 0;
}