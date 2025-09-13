#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra1[50] = {"Bola"};
    char palavra2[50] = {"Acabaxi"};

    printf("\nAntes de copiar:\n");
    printf("\nPalavra 1: %s\n", palavra1);
    printf("\nPalavra 2: %s\n", palavra2);

    strcpy(palavra2, palavra1);

    printf("\nDepois de copiar:\n");
    printf("\nPalavra 1: %s\n", palavra1);
    printf("\nPalavra 2: %s\n", palavra2);

    printf("\n");
    return 0;
}