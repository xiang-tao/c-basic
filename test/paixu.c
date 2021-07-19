#include<stdio.h>
#include "algebra.h"
#define N 10
int main()
{
    int i;
    int a[N] = {9,8,7,5,2,1,4,7,3,6};
//    xuanze(a,N);
    kuaisu(a,N,0,N-1);
    for(i=0;i<N;i++)
    {
        printf("%3d",a[i]);
    }
    putchar('\n');
}
