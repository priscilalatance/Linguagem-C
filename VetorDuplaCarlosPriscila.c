// Dupla: Carlos Patuci e Priscila Padilla Latance. Compilado no CodeBlocks//

#include <stdio.h>

int main(){
    int vetor[7];
    int i, Dias=0;
    float media, soma=0;


   for (i=0;i<7;i++){
        printf("\nDigite uma temperatura: ");
        scanf("%d", &vetor[i]);
        soma=soma+vetor[i];
   }
   media=soma/7;
   printf("Media da temperatura: %.0f", media);

   for (i=0;i<7;i++){
        if (vetor[i]>media){
            Dias++;
    }
    }
    printf("\nQuantidade de dias acima da media: %d", Dias);
}
