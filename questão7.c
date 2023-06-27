#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{

    int mat[4],*p,x;

    p=mat+1;//da certo,pois mostra o endereço do segundo elemento do vetor

//    p=mat++;//não da certo,pois não tem como usar essa expressão no vetor
//    p=++mat; não da certo,pois não tem como usar essa expressão no vetor
    x=(*mat)++;//da certo,pois mostra o segundo elemento do vetor


    printf("%d\n",p);
    printf("%d",x);
}
