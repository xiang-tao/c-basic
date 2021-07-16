#include<stdio.h>
#include<math.h>
#include "algebra.h"
#define N 3
double f(double x)
{
    return x*x-N;
}
double df(double x)
{
    return 2*x;
}
int main()
{
    double a=1,b=N,err=1.0e-9;

    double x1 = erfenfa(a,b,f,err);
    printf("二分法求解的值为:%f\n",x1);

    double x2 = niudun(a,b,f,df,err);
    printf("牛顿法求解的值为:%f\n",x2);

    double x3 = first_niudun(a,b,f,df,err);
    printf("固定导数的牛顿法求解的值为:%f\n",x3);

    double x4 = gexianfa(a,b,f,err);
    printf("割线法求解的值为:%f\n",x4);
}
