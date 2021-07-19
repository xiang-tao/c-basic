#include<stdio.h>
#define M 17
int yuesefu(int *a, int n, int k)
{
    int people = n;
    int count = 0;
    for(int i=0;i<n;i=(i+1)%n)
    {
        if(a[i]==0)
        {
            count+=1;
            if(count == k)
            {
                a[i]=1;
                people-=1;
                count = 0;
            }
        }
        if(people == 1)
        {
            for(int s=0;s<n;s++)
                if(a[s] == 0)
                    printf("最后剩下的那个人对应的下标是:%d",s);
            putchar('\n');
            break;
        }
    }
    return 0;
}
int main()
{
    int a[M] = {0};
    int k=3;
    yuesefu(a,M,k);
}
