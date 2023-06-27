
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{

    int pulo[5];
    int i;


    for(i=0; i<=4; i++)
    {

        pulo[i]=i;
    }
    printf("%d\n",*(pulo+2));//refencia o terceiro elemento do vetor
    printf("%d\n",*(pulo+4));//referencia o quinto elemento do vetor
    printf("%d\n",pulo+2);//referencia o endereço do terceiro elemento do vetor
    printf("%d\n",pulo+4);//referencia o endereço do quinto elemento do vetor

    //com isso,8(pulo+3) e pulo +2 referenciam o terceiro elemento do vetor


}
