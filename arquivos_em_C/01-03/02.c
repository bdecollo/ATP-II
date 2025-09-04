#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nomes[100];
    FILE *arquivo;
    arquivo = fopen("nomes.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    while (fgets(nomes, 100, arquivo) != NULL)
        printf("%s\n", nomes);

    fclose(arquivo);
    return 0;
}