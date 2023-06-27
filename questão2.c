
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{
    int i=5,*p;
    p=&i;

    printf("%x %d %d %d %d",p,*p+2,**&p,3**p,**&p+4);

//p-mostra o endereço que o ponteiro aponta
//*p+2- mostra 7,pois *p=5 ,ou seja, *p+2=7
//**&P- mostra o que tem no endereço que o ponteiro aponta
//3**p- faz a multiplicação de 3 pelo que tem no endereço que p aponta,ou seja,3*5=15
//**&p+4- pega o valor que p aponta e acrescenta 4 unidades,ou seja, 5+4=9






}

