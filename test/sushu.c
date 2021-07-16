#include<stdio.h>
#include<math.h>
int sushu(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<sqrt(i)+1;j++)
        {
            if(i%j==0)
                break;
        }
        if(j>=sqrt(i))
            printf("%d\n",i);
    }
    return 0;
}
int main()
{
    int n=100;
    sushu(n);
}

