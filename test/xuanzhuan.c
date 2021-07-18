#include<stdio.h>
#define N 15
int main()
{
    int a[2*N-1] = {0},c[2*N-1]={0};
    a[0] = N;
    int k=1,i,j,x=N;
    for(i=0;i<N-1;i++)
    {
        x-=1;
        for(j=0;j<2;j++)
        {
            a[k] = x;
            k+=1;
        }
    }
    for(i=0;i<2*N-1;i++)
    {
        for(j=0;j<=i;j++)
            c[i]+=a[j];
    }
    /*********************/
    int m=0,n=0,r=0;
    int b[N][N] = {0};
    for(i=1;i<=N*N;i++)
    {
        if(i>=c[r])
            r+=1;
        if(r%4==0)
        {
            b[m][n] = i;
            n+=1;
        }
        if(r%4==1)
        {
            b[m][n] = i;
            m+=1;
        }
        if(r%4==2)
        {
            b[m][n] = i;
            n-=1;
        }
        if(r%4==3)
        {
            b[m][n] = i;
            m-=1;
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",b[i][j]);
        }
        putchar('\n');
    }
}
