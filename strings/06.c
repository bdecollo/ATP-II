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

    printf("Digite uma palavra ou frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    remover_espacos(str);

    printf("\nString sem espacos: %s\n\n", str);

    return 0;
}