#include<stdio.h>
#define x 2
#define N 100
#define M 50
int main()
{
    int a[M] = {0},i,j;
    a[M-1] = 1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            a[j] *= x;
        for(j=M-1;j>0;j--)
        {
            if(a[j]>9)
            {
                a[j-1] += a[j]/10;
                a[j] %= 10;
            }
        }
    }
    for(j=0;a[j]==0;j++);
    for(;j<M;j++)
        printf("%d",a[j]);
    putchar('\n');
}
