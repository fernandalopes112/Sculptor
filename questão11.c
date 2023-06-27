#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{


    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2]=value;          // esse comando é válido
    printf("%f\n",aloha[2]);


    scanf("%f",&aloha);// comando válido



// aloha=value;  comando inválido


    printf("%f",aloha);// comando válido



    coisas[4][4]=aloha[3]; // comando válido


//coisas[5]=aloha;  comando inválido


//pf=value;   comando inválido


    pf=aloha; // comando válido
}
