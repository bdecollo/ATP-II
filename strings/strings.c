#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome1[50], nome2[50];

    printf("Digite seu nome: ");
    // scanf("%50[^\n]", palavras);
    // gets(palavras); -> PERIGOSA
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite outro nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("\nComparacao: %d\n", strcmp(nome1, nome2)); // comparar (%d como retorno)
    printf("\nConcatenacao: %s\n", strcat(nome1, nome2)); // concatenar
    printf("\nTamanho do nome: %d\n", strlen(nome1)); // tamanho da string

    printf("\nNome: %s\n\n", nome1);

    return 0;
}