
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{

    int i=3,j=5,z,w;
    float x;
    float *p,*q;

    p=&i;//pega o endereço de i
    q=&j;


    printf("teste 1:%d\n",p);

    z=*p-*q;//subtrai o conteudo que está dentro dos endereços

    printf("teste 2:%d\n",z);

    w=**&p;//pega o conteúdo de p

    printf("teste 3:%d\n",w);

    x=3-*p/(*q)+7;//realiza a conta com os conteúdos de p e q

    printf("teste 4:%f",x);

}

