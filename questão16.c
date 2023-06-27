
#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int compare(const void* a,const void* b)
{

    return (*(int*)a)-*(int*)b;

}

int main()
{
    int n,i;


    printf("digite o numero de termos:\n");
    scanf("%d",&n);
    float values[n];





    printf("digite os elementos do vetor:\n");

    for(i=0; i<n; i++)
    {
        scanf("%f",&values[i]);
    }

    qsort(values,n,sizeof(float),compare);


    printf("o vetor em ordem crescente eh:");

    clock_t t;
    t=clock();
    for(i=0; i<n; i++)
    {
        printf("%f ",values[i]);
    }
    t=clock()-t;
    printf("it took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);

    t=clock();
    memcpy(values,n,n*sizeof(int));
    t=clock()-t;

    printf("it took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
}


