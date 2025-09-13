#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[50] = {"PALAVRA para mudar"};

    strlwr(palavra);
    printf("Palavra minuscula: %s\n", palavra);
    strupr(palavra);
    printf("Palavra maiuscula: %s\n", palavra);
    strrev(palavra);
    printf("Palavra invertida: %s\n", palavra);

    return 0;
}