#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    for(i=2;i<101;i++)
    {
        for(j=2;j<sqrt(i)+1;j++)
        {
            if(i%j==0)
                break;
        }
        if(j>=sqrt(i))
            printf("%d\n",i);
    }
}
