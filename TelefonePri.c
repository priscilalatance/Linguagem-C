#include<stdio.h>

void CalcContaTel(int TipoTel, int QtdePulsos, int MinInter, int ServDesp){

    float TotTipoTel=0, TotPulsos=0, TotInter=0,TotServDesp=0,ValConta;

    if (TipoTel==1){
        TotTipoTel=10;
    }
    else{
        if(TipoTel==2)
        TotTipoTel=15;
    }
    if (QtdePulsos>=90){
          TotPulsos=0;
    }
    if (QtdePulsos>90){
        TotPulsos=(QtdePulsos-90)*0.05;
    }

    if (MinInter>=1){
        TotInter=(MinInter*60)*0.08;
    }
    if (ServDesp>=1){
        TotServDesp=ServDesp*2;
    }
    ValConta=TotTipoTel+TotPulsos+TotInter+TotServDesp;
    printf("\nTotal da Conta Telefonica: R$:%.2f\n", ValConta);
}


int main()
{
    int NumTel, TipoTel, QtdePulsos, MinInter, ServDesp;

    printf("Informe o numero do telefone: ");
    scanf("%d",&NumTel);
    printf("Informe o tipo de telefone: ");
    scanf("%d",&TipoTel);
    printf("Informe o numero de pulsos registrados: ");
    scanf("%d",&QtdePulsos);
    printf("Informe o numero total de minutos gastos em ligacoes interurbanas: ");
    scanf("%d",&MinInter);
    printf("Informe o numero de servicos de Despertador prestados: ");
    scanf("%d",&ServDesp);
    CalcContaTel(TipoTel, QtdePulsos, MinInter, ServDesp);
}
