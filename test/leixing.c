#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i] = i;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
