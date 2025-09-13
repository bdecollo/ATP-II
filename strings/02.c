#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int tam;

    printf("Digite uma palavra ou frase para inverter:\n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    tam = strlen(str);

    for (int i = tam - 1; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");

    return 0;
}