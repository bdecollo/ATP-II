#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    printf("Digite uma palavra ou frase: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int tam = strlen(str);
    printf("Quantidade de caracteres: %d\n", tam);

    return 0;
}