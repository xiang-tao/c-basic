/*
 * Notes:统计一个区间中的完数
 * ---------
 *  完数定义：即该数的因数（包含1，但不含自身）和等于自身
 * */
#include<stdio.h>
#include<math.h>
int main()
{
    int j,i;
    for(i=2;i<1001;i++)
    {
        int sum = 0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d\n",i);
    }
}
