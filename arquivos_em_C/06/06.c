#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f1 = NULL, *f2 = NULL, *fFinal = NULL;
    char nomeF1[100], nomeF2[100], nomeFFinal[100];
    int temp;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nomeF1);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nomeF2);
    printf("Digite o nome do arquivo final: ");
    scanf("%s", nomeFFinal);

    f1 = fopen(nomeF1, "r");
    fFinal = fopen(nomeFFinal, "w");

    if (f1 == NULL || fFinal == NULL){
        perror("Erro ao abrir os arquivos.\n");
        exit(1);
    }

    while ((temp = fgetc(f1)) != EOF){
        fputc(temp, fFinal);
    }
    fclose(f1);
    fclose(fFinal);

    f2 = fopen(nomeF2, "r");
    fFinal = fopen(nomeFFinal, "a");

    if (f2 == NULL || fFinal == NULL){
        perror("Erro ao abrir os arquivos.\n");
        exit(1);
    }

    while ((temp = fgetc(f2)) != EOF){
        fputc(temp, fFinal);
    }
    fclose(f2);
    fclose(fFinal);

    printf("Ambos os arquivos '%s' e '%s' foram concatenados com sucesso no arquivo '%s'.\n", nomeF1, nomeF2, nomeFFinal);
    
    return 0;
}