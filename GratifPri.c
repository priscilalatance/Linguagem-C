#include<stdio.h>

float CalcGratif(int CodFunc, int SalBase, int TempServ)
{

    float Area=0, Grat=0;

    Area=CodFunc/100;

    if(Area==1 && TempServ>=5){
        Grat=SalBase*0.025;
    }
    if(Area==1 && TempServ>5){
        Grat=SalBase*0.045;
    }
    if(Area==2 && TempServ>=5){
        Grat=SalBase*0.035;
    }
    if(Area==2 && TempServ>5){
        Grat=SalBase*0.055;
    }
    if(Area==3 && TempServ>=5){
        Grat=SalBase*0.04;
    }
    if(Area==3 && TempServ>5){
        Grat=SalBase*0.065;
    }
}

int main()
{
    int CodFunc, TempServ;
    float SalBase=0, Grat=0, Soma=0;

    printf("Informe o Codigo do Funcionario: ");
    scanf("%d",&CodFunc);

    while (CodFunc!=0){

    printf("Informe o Salario Base: ");
    scanf("%f",&SalBase);
    printf("Informe o Tempo de Servico: ");
    scanf("%d",&TempServ);
    Grat=CalcGratif(CodFunc,SalBase,TempServ);
    Soma=Soma+Grat;
    printf("Informe o Codigo do Funcionario: ");
    scanf("%d",&CodFunc);
    }
    {
    printf("Valor Total de Gratificacao da Empresa: R$%.2f\n", Soma);
    }

}
