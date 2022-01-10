#include <stdio.h>

int main(){
  int vetor[5]={10,15,18,20,25};
  int TotComodos, Cont=1, Classe;
  float Area, Potencia=0, Lampadas=0, SomaPotencia=0, SomaLampadas=0;

    printf("Informe o Total de Comodos da Casa: ");
    scanf("%d",&TotComodos);

    while (Cont<=TotComodos){
        printf("Digite a Classe do Comodo: ");
        scanf("%d",&Classe);
        printf("Digite a Area do Comodo: ");
        scanf("%f",&Area);
            if (Classe==1){
                Potencia=vetor[0]*Area;
            }
            if (Classe==2){
                Potencia=vetor[1]*Area;
            }
            if (Classe==3){
                Potencia=vetor[2]*Area;
            }
            if (Classe==4){
                Potencia=vetor[3]*Area;
            }
            if (Classe==5){
                Potencia=vetor[4]*Area;
            }
            Lampadas=Potencia/60;
            printf("Potencia do Comodo: %.f\n", Potencia);
            printf("Lampadas Necessarias para o Comodo: %.f\n", Lampadas);
            SomaPotencia=SomaPotencia+Potencia;
            SomaLampadas=SomaLampadas+Lampadas;
            Cont=Cont+1;
    }
    printf("Total de Potencia da Residencia: %.f\n", SomaPotencia);
    printf("Total de Lampadas Necessarias para a Residencia: %.f\n", SomaLampadas);
}
