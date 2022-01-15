#include <stdio.h>
#include <string.h>

int main(){

   char aluno[21], senha[20];
   printf("\nInforme um nome: ");
   scanf("%[^\n]s",aluno);
   strcpy(senha,"Igor");

   printf("\nAluno: %s\n",aluno);
   printf("Teste: %s\n",senha);
   printf("Tamanho da String Aluno: %d\n",strlen(aluno));
   for (int i=0;i<strlen(aluno);i++)
        printf("%c-", aluno[i]);

   if (strcmp(senha,"Igor")==0)
       printf("\nOK");
   else
   printf("\nSenha errada");
   
   printf("\n%s comeca com a letra %c",aluno,aluno[0]);

}
