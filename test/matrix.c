#include<stdio.h>
#define M 3
#define N 3
#define P 1
#include "algebra.h"
int main()
{
    int i,j;
    int a[M][N] = {1,2,3,1,1,1,0,0,1};
    int b[N][P] = {1,1,1};
    int c[M][P]={0};
    MatrixMulti(M,N,P,a[0],b[0],c[0]);
    for(i=0;i<M;i++)
    {
        for(j=0;j<P;j++)
        {
            printf("%d\t",c[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
