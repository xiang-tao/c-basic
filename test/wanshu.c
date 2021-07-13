#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,k=2,i;
    for(i=1;i<1001;i++)
    {
        if(i%k==0)
        {
            sum =1+sum + k+i/k;
        }
        k+=1;
        if(sum==i)
            printf("%d\n",i);

    }
}
