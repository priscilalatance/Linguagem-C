#include <stdio.h>

float fJovem(int DP)
{
    float Plano, ContDP, TotPagar;
    Plano=200+(30*12);
    ContDP=(DP*10)*12;
    TotPagar=Plano+ContDP;
    return TotPagar;
}

float fAdulto(int DP)
{
    float Plano, PlanoTotal, ContDP, TotPagar;
    Plano=60*12;
    PlanoTotal=Plano+300;
        if(DP==0){
            ContDP=(Plano/2)*0.10;
        }
    TotPagar=PlanoTotal+ContDP;
    return TotPagar;
}

void main(void)
{
    int Idade, Dependentes;
    float TotPagar;

    printf("\nInforme a Idade: ");
    scanf("%d",&Idade);
    printf("\nInforme a quantidade de Dependentes: ");
    scanf("%d",&Dependentes);

    if(Idade >=16 && Idade<20){
        TotPagar = fJovem(Dependentes);
        printf("\nPlano Jovem\n");
        printf("\nNumero de Dependentes é %d e valor total a ser pago R$%.2f\n", Dependentes, TotPagar);
    }
    else
    if(Idade>=20)
    {
        TotPagar = fAdulto(Dependentes);
        printf("\nPlano Adulto\n");
        printf("\nNumero de Dependentes é %d e valor total a ser pago R$%.2f\n", Dependentes, TotPagar);
    }
    else{
        printf("\n Voce e muito jovem para se associar, cresca e apareca!\n");
    }

}

