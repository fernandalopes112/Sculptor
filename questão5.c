
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>



int main()
{

    float vet[5]= {1.1,2.2,3.3,4.4,5.5};

    float *f;
    int i;

    f=vet;

    for(i=0; i<=4; i++)
    {

        printf("\n i = %d\t",i);//vai mostrar na tela 0,1,2,3,4
        printf("vet[%d] = %.1f\t",i, vet[i]);//vai mostrar os valores de cada elemento do vetor.vet[0]=1.1,vet[1]=2.2,vet[2]=3.3,vet[3]=4.4,vet[4]=5.5
        printf("*(f + %d) = %.1f\t",i, *(f+i));//vai mostrar o valor de cada elemento vetor. *(f+0)=1.1;*(f+1)=2.2;*(f+2)=3.3;*(f+3)=4.4;*(f+4)=5.5
        printf("&vet[%d] = %X\t",i, &vet[i]);//vai mostrar o endereço de cada elemento do vetor
        printf("(f + %d) = %X\t",i, f+i);//outra forma de mostrar o endereço em cada posição do vetor



    }



}
