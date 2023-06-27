
#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int crescente(const void* a,const void* b)
{

    return (*(int*)a)-*(int*)b;

}

int main()
{
    int n,i;


    printf("digite o numero de termos:\n");
    scanf("%d",&n);
    int values[n];





    printf("digite os elementos do vetor:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&values[i]);
    }

    qsort(values,n,sizeof(int),crescente);


    printf("o vetor em ordem crescente eh:");
    for(i=0; i<n; i++)
    {
        printf("%d ",values[i]);
    }


}


