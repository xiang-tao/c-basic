#include<stdio.h>
#include<math.h>
//#define N 4
int main()
{
//    int n=N;
    int n,j,i,k;
    printf("请输入一个整数n:");
    scanf("%d",&n);
    for(i=1;i<2*n;i++)
    {
        for(k=0;k<fabs(n-i);k++)
            putchar(' ');
        for(j=1;j<=2*n-1-2*fabs(i-4);j++)
            putchar('*');
        putchar('\n');
    }

}
