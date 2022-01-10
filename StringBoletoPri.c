#include<stdio.h>
#include<string.h>// para a string
#include <stdlib.h>//para a função atoi



int main(){

    char boleto[3], codigo[53], banco[4], numero[11];
    int i, l, c=0, iValor;
    float valorBoleto, valorMulta;


    printf("Se for boleto vencido, digite sim e para finalizar digite Fim:");
    scanf("%s", boleto);

    fflush(stdin);

    while (strcmp(boleto,"fim")!=0){
        printf("\nDigite o codigo de barras do boleto:");

        gets(codigo);
        fflush(stdin);
    for (i=0;i<3;i++){
        banco[i]=codigo[i];
    }
    banco[i]='\0';
    printf("\nCodigo do Banco %s\n", banco);

     if(strcmp(banco,"001")==0){
        printf("Banco do boleto: Banco do Brasil\n");
     }
     if(strcmp(banco,"033")==0){
        printf("Banco do boleto: Santander\n");
     }
     if(strcmp(banco,"104")==0){
        printf("Banco do boleto: Caixa Econômica Federal\n");
     }
     if(strcmp(banco,"341")==0){
        printf("Banco do boleto: Itau\n");
     }
     if(strcmp(banco,"745")==0){
        printf("Banco do boleto: Citibank\n");
     }
     c=0;
    for (l=43;l<53;l++){
        numero[c]=codigo[l];
        c++;
    }
    numero[c]='\0';
    printf("Ultimos Codigos do boleto %s\n", numero);

    iValor=atoi(numero);
    valorBoleto=iValor/100.0;
    valorMulta=valorBoleto*0.1;
    printf("Valor da Multa R$%.2f\n", valorMulta);

    printf("\nSe for boleto vencido, digite sim e para finalizar digite Fim:");
    scanf("%s", boleto);
    fflush(stdin);
    }
}


