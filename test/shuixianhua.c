/*
 *
 *Notes:计算水仙花数，例如abc=a^3+b^3+c^3，则abc叫做水仙花数
 ----------
 输入一个整数，判断其是否是水仙花数，这个整数的位数可以自己任意设定
 * */
#include<stdio.h>
#include<math.h>
#define N 4
int main()
{
    int sum=0,k1,k,i;//n
    //printf("请输入一个整数:");
    //scanf("%d",&n);
    printf("请输入一个%d位数的整数:",N);
    scanf("%d",&k);
    k1=k;
    int a[N] = {0};
    for(i=0;i<N;i++)
    {
        if(i!=N-1)
        {
            a[i]=k/pow(10,N-1-i);
            k-=a[i]*pow(10,N-1-i);
        }
        else
            a[i]=k;
    }
    for(i=0;i<N;i++)
        sum+=pow(a[i],N);
    if(sum==k1)
        printf("%d是水仙花数\n",k1);
    else
        printf("%d不是水仙花数\n",k1);

}
