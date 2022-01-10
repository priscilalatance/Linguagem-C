#include <stdio.h>

int fProcura (int *vet, int num, int i)
    {
    if (*vet != num){
    return fProcura (vet+1,num, i-1);
    }
    else
    return *vet;


}



int main()
    {
    int vet [5] = {10,20,30,40,50};
    printf("\nResultado : %i", fProcura(vet,50, 4));
    }
