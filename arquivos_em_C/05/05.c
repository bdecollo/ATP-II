#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void letrasMinusculas(char *str){
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

int main(){
    char linha[100];
    char palavra[50];
    char nomeArquivo[] = "teste.txt";
    FILE *arquivo;

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    
    printf("Digite a palavra para procurar no arquivo: ");
    scanf("%49s", palavra);

    int numLinha = 0;
    int palavraEncontrada = 0;

    while (fgets(linha, 100, arquivo) != NULL){
        numLinha++;

        char copiaLinha[100];
        strcpy(copiaLinha, linha);
        char copiaPalavra[50];
        strcpy(copiaPalavra, palavra);

        letrasMinusculas(copiaLinha);
        letrasMinusculas(copiaPalavra);

        if (strstr(copiaLinha, copiaPalavra) != NULL){
            linha[strcspn(linha, "\n")] = '\0';
            printf("Palavra encontrada na linha %d: %s\n", numLinha, linha);
            palavraEncontrada = 1;
        }
    }

    if (palavraEncontrada != 1)
        printf("Palavra nao encontrada no arquivo.\n");

    fclose(arquivo);
    return 0;
}