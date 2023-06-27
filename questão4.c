
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>




int main()
{

    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome="Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    valor=10;
    p1=&valor;
    *p1=20;

    printf("%d\n",valor); // vai dar 20,pois fiz p1 apontar para valor e o conteúdo de p1 eh 20

    temp=26.5;
    p2=&temp;
    *p2=29.0;

    printf("%.1f\n",temp);//vai dar 29,pois faço p2 apontar para temp e mudo o conteúdo da variável para 20.0

    p3=&nome[0];
    aux=*p3;

    printf("%c\n",aux);//O resultado eh P,pois fiz p3 apontar para o primeiro caracter do vetor nome e atribui ele a aux

    p3=&nome[4];
    aux=*p3;

    printf("%c\n",aux);//O resultado eh o 'e',pois fiz p3 apontar para a quinta posição do vetor e atribui ela a variável aux

    p3=nome;
    printf("%c\n",*p3);//resultado eh P,aponta para o primeiro elemento do vetor

    p3=p3+4;
    printf("%c\n",*p3);//resultado eh o caracter 'e',pois quando faço p3=p3+4 faço p3 apontar para a quinta posição do vetor

    p3--;

    printf("%c\n",*p3);//o resultado eh o caracter 't',pois fiz o ponteiro apontar para 1 posição anterior,ou seja,posição 4

    vetor[0]=31;
    vetor[1]=45;
    vetor[2]=27;

    p4=vetor;
    idade=*p4;

    printf("%d\n",idade);//resultado eh 31

    p5=p4+1;
    idade=*p5;

    printf("%d\n",idade);//resultado eh 45

    p4=p4-2;
    idade=*p4;

    printf("%d\n",idade);//resultado eh 0

    p5=&vetor[2]-1;
    printf("%d\n",*p5);//resultado eh 45

}

