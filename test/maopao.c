#include<stdio.h>
#include "algebra.h"
#define N 10
int main()
{
    int a[N] = {1,5,7,9,4,3,2,1,50,14},i,input;
    maopao(a,N);
    printf("请输入你要查找的数字:");
    scanf("%d",&input);
    int begin=0,end=N;
    while(begin<=end-1)
    {
        if(a[(begin+end)/2]>input)
            end = (begin+end)/2-1;
        else if(a[(begin+end)/2]<input)
            begin = (begin+end)/2+1;
        else
        {
            printf("%d对应的下标是:%d",\
                    input,(begin+end)/2);
            putchar('\n');
            break;
        }
    }

    for(i=0;i<N;i++)
        printf("%3d",a[i]);
    putchar('\n');
}
