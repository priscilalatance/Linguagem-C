#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20],i, caracter;
    int vogais=0;

   printf("\nInforme uma palavra: ");
   scanf("%[^\n]s",palavra);

    for (i=0;i<strlen(palavra);i++){
       if(tolower(palavra[i])=='a' || tolower(palavra[i])=='e' || tolower(palavra[i])=='i' || tolower(palavra[i]=='o') || tolower(palavra[i]=='u'))
          vogais++;
    }
    printf("Qtde de vogais: %d",vogais);

    printf("\nInforme um vogal ou consoante: ");
    scanf(" %c",&caracter);

   for (i=0;i<strlen(palavra);i++){
       if(tolower(palavra[i])=='a' || tolower(palavra[i])=='e' || tolower(palavra[i])=='i' || tolower(palavra[i]=='o') || tolower(palavra[i]=='u'))
       palavra[i]=caracter;
   }
   printf("\nNome atual: %s", palavra);
}
