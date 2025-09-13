#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char frase[50] = {"FRASE TESTE"};

    printf("\nFrase original: %s\n", frase);

    for(int i = 0; frase[i] != '\0'; i++)
        frase[i] = tolower(frase[i]);

    printf("Frase minuscula: %s\n\n", frase);
    
    return 0;
}