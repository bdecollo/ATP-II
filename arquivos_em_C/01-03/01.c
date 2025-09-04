#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nomes[100];

    FILE *arquivo;
    arquivo = fopen("nomes.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++){
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes);
        fprintf(arquivo, "%s\n", nomes);
    }

    fclose(arquivo);
    return 0;
}