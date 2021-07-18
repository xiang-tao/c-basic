#include<stdio.h>
#define N 7
int main()
{
    int a[N][N] = {0},c=N/2,i,j;
    int m = N-1, n = c;
    a[m][n] = 1;
    for(i=0;i<N*N-1;i++)
    {
        m=(m+1)%N;
        n=(n+1)%N;
        if(a[m][n] == 0)
            a[m][n] = i+2;
        else
        {
            a[m-1][n] = i+2;
            m=m-1;
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%4d",a[i][j]);
        }
        putchar('\n');
    }
}
