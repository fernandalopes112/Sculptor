
#include<stdio.h>
#include<stdlib.h>//para o malloc
#include<time.h>


int main()
{

    float tipo[4];
    float *x;

    x=&tipo;

    printf("%d %d %d",x+1,x+2,x+3);



//como char fica sendo:6422037 6422038 6422039  1 em 1 byte
//como int fica sendo:6422020 6422024 6422028   4 em 4 bytes
//como float fica sendo:6422020 6422024 6422028 4 em 4 bytes
//como double fica sendo:6422008 6422016 6422024 8 em 8 bytes


}


