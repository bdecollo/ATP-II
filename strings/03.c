#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVogais(const char *str){
    int contador = 0;

    for (int i = 0; str[i] != '\0'; i++){
        char atual = tolower(str[i]);
        if (atual == 'a' || atual == 'e' || atual == 'i' || atual == 'o' || atual == 'u')
            contador++;
    }

    return contador;
}

int main(){
    char texto[100];

    printf("Digite uma palavra ou frase:\n");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    int totalVogais = contarVogais(texto);

    if (totalVogais != 0)
        printf("Seu texto tem %d vogais.\n", totalVogais);
    else {
        printf("Seu texto nao tem vogais.\n");
    }

    return 0;
}