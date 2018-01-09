#include <stdio.h>

/* This program should be able to do modular arithmetic with variables that are not explicitly declared */

int main(){

    //int modular_input(int a, int b);

    int a;
    int b;
    int c = 0;
    int solution;
    FILE *modular_input = fopen("/Users/Kate/programs/C/random_test_exercises/modular_input.txt", "r");

    scanf("%d, %d", &a, &b);
    fclose(modular_input);
    if (a % b != EOF){
        printf("%d", solution);
    }
}