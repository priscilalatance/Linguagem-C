#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20], letra;
    int i, qtde=0;

    printf("\nDigite uma palavra: ");
    scanf("%[^\n]s",palavra);
    printf("\nDigite uma letra: ");
    scanf(" %c",&letra);

    for (i=0;i<strlen(palavra);i++){
        if (tolower(palavra[i])==letra)
            qtde++;
    }
    printf("\nQuantidade: %d", qtde);
}
