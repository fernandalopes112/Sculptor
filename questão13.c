
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>

int main()
{



    float *v;

    int n;

    int i;


    float temp;

    printf("digite a quantidade de numeros:");
    scanf ("%d", &n);

    v = malloc (n * sizeof (float));

    for (int i = 0; i < n; ++i)
    {
        scanf ("%f", &v[i]);
    }



    for(i=0; i<n; i++)
    {

        if(v[i]>v[i+1])
        {
            temp=v[i+1];
            v[i+1]=v[i];
            v[i]=temp;
        }
        else
        {
            v[i]=v[i];

        }


    }


    for(i=0; i<n; i++)
    {

        printf("%f ",v[i]);
    }


    free(v);
    return 0;
}






