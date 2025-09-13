#include <stdio.h>
#include <string.h>

void converter_para_maiuscula(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; // tabela ASCII
    }
}

int main(){
    char str[100];

    printf("Digite uma palavra ou frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    converter_para_maiuscula(str);

    printf("\nString com letras maiusculas: %s\n\n", str);

    return 0;
}