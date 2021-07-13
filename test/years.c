#include<stdio.h>
#define y0 1990
#define m0 1
#define d0 1

//判断闰年就多加一天
int runnian(int year)
{
    int i,k=0;
    for(i=y0;i<year;i++)
    {
        if(i%400==0)
            k+=1;
        else if(i%100==0)
            k+=0;
        else if(i%4==0)
            k+=1;
        else
            k+=0;
    }
    return k;
}

//判断月份天数
int yuefen(int month)
{
    int k=(month-1)*30,i;
    for(i=m0;i<month;i++)
    {
        if(i==3 || i==5 || i==7 || i==8 || i==10)
            k+=1;
    }
}

int main()
{
    int y1=1997,m1=8,d1=22;
    int y2=2021,m2=7,d2=12;
    int sum,sum0,sum1,sumy0,sumy1,summ0,summ1,sumd0,sumd1;
    sumy0=(y1-y0)*365;
    summ0=(m1-m0)*30;
    sumd0=d1-d0;
    sum0=sumy0+summ0+sumd0;
    sumy1=(y2-y0)*365;
    summ1=(m2-m0)*30;
    sumd1=d2-d0;
    sum1=sumy1+summ1+sumd1;
    sum = sum1-sum0+1;
    printf("%d\n",sum);
}
