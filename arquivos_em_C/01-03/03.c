#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arquivo;
    char linha[100];
    int contador = 0;

    arquivo = fopen("nomes.txt", "r");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    while (fgets(linha, 100, arquivo) != NULL)
        contador++;

    printf("O arquivo tem %d linhas.\n", contador);

    fclose(arquivo);
    return 0;
}