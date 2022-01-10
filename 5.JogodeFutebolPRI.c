#include<stdio.h>

void fRenda(int Pubtotal)
{

   float Popular, Geral, Arquibancada, Cadeiras, TotRenda;

    Popular= (Pubtotal*0.10)*5;
    Geral=(Pubtotal*0.50)*10;
    Arquibancada=(Pubtotal*0.30)*20;
    Cadeiras=(Pubtotal*0.10)*30;
    TotRenda=Popular+Geral+Arquibancada+Cadeiras;
    printf("\nTotal de Renda do jogo: R$%.2f\n", TotRenda);
}

int main()
{
    int PubTotal;

    printf("Informe o  publico total do jogo: ");
    scanf("%d",&PubTotal);
    fRenda(PubTotal);
}

