#include <stdio.h>
#include <string.h>

void removerEspacos(char *str){
    int i, j = 0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main(){
    char str[100];
    char str2[100];

    printf("Digite uma palavra ou frase para inverter: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    strlwr(str);
    removerEspacos(str);
    strcpy(str2, str);
    strrev(str);

    if(strcmp(str, str2) == 0)
        printf("Palindromo!\n");
    else
        printf("Nao palindromo!\n");

    return 0;
}