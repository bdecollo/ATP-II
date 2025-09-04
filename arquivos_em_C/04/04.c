#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivoInicial, *arquivoFinal;
    char nomeArquivoInicial[100], nomeArquivoFinal[100];
    
    printf("Nomeie o arquivo de origem: ");
    scanf("%s", nomeArquivoInicial);

    printf("Nomeie o arquivo de destino: ");
    scanf("%s", nomeArquivoFinal);

    arquivoInicial = fopen(nomeArquivoInicial, "r");
    if (arquivoInicial == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    arquivoFinal = fopen(nomeArquivoFinal, "w");
    if (arquivoFinal == NULL){
        printf("Erro ao abrir o arquivo.\n");
        fclose(arquivoInicial);
        exit(1);
    }
    
    int copia;
    while ((copia = fgetc(arquivoInicial)) != EOF)
        fputc(copia, arquivoFinal);

    printf("Arquivo copiado.\n");

    fclose(arquivoInicial);
    fclose(arquivoFinal);
    return 0;
}