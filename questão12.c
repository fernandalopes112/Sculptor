
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


#include <stdio.h>

//serve para definir,em tempo de execução,qual função será executada,sem a necessidade de escrever o nome da função,de forma explícita naquele ponto do código




// exemplo com o uso desse recurso:


void inc (int *n)
{
    (*n)++ ;
}

int main ()
{
    void (*fp) (int *) ;		// function pointer

    fp = inc ;			// fp points to inc

    int a = 0 ;
    printf ("a vale %d\n", a) ;

    inc(&a) ;			// normal call
    printf ("a vale %d\n", a) ;

    fp(&a) ;			// call using the function pointer
    printf ("a vale %d\n", a) ;
}
