/*
 * Notes:计算亲密数对
 * ------
 *如果整数A的全部因子（包括1，不包括A本身）之和等于B；且整数B
 的全部因子（包括1，不包括B本身）之和等于A，则将整数A和B称为亲密数
 * */
#include<stdio.h>
#include<math.h>
int main()
{
    int sum,sumB,j,i;
    for(i=2;i<100001;i++)
    {
        sum = 0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        sumB=0;
        for(j=1;j<=sum/2;j++)
        {
            if(sum%j==0)
                sumB+=j;
        }
        if(sumB==i && i<sum)  /*使每对亲密数只输出一次*/
            printf("%4d--%4d    ", i, sum);
    }
    printf("\n");
}
