#include<stdio.h>
#include "algebra.h"
int main()
{
    int a[][3]={1,2,3,4,5,6};
    int i,j;
    int b[10] = {[2]=1,2,3};
    for(i=0;i<10;i++)
        printf("%d\t",b[i]);
    printf("\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
}
