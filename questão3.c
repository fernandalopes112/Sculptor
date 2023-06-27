
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>



int main()
{

    int i,j;
    int *p,*q;

    p=i;//da certo

    printf("teste 1:%d\n",p);

    q=&j;//da certo

    p=&*&i;//da certo,

    printf("teste 3:%d\n",p);

    // i=(*&)j:Não da certo!

    i=*&*&j;//deu certo

    printf("teste 5:%d\n",i);

    q=*p;//da certo

    printf("teste 6:%d\n",q);

    i=(*p)++ + *q;//não da certo

    printf("teste 7:%d",i);

}

