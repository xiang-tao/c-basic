/*
 *Notes:哥德巴赫猜想
 ---------
 验证大于4且小于N的偶数都可以表示成两个素数的和
 * */
#include<stdio.h>
#include<math.h>
#include "algebra.h"
#define N 100000
int main()
{
    int a[4]={0},i=0,n,m;
    for(n=6;n<N;n+=2)
    {
        int flag=1;
        for(m=2;m<=n/2;m++)
        {
            if(isprime(m)==1 && isprime(n-m)==1)
            {
                printf("%d,%d,%d\n",n,m,n-m);
                flag=0;
                break;
            }
        }
        if(flag == 1)
            a[i++] = n;

    }
    for(i=0;i<4;i++)
    {
        printf("%d\n",a[i]);
    }
}
