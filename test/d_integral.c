/*
 *Notes:计算定积分
 -----------
 采用矩形方式，梯形方式，以及其他的
 一些方式求一个函数定积分的近似值
 * */

#include<stdio.h>
#include<math.h>
#include "algebra.h"
#define PI 4*atan(1)
double f(double x)
{
    return exp(-x*x);
}
int main()
{
    double a=0,b=100,n=500;
    double val1,val2,val3,val4,val5,val6;
    val1 = l_rectangle(a,b,f,n);
    val2 = c_rectangle(a,b,f,n);
    val3 = r_rectangle(a,b,f,n);
    val4 = trapezoid(a,b,f,n);
    val5 = simpson(a,b,f,n);
    val6 = gauss_legendre(a,b,f,n);
    printf("左矩形计算结果是:%f\n",val1);
    printf("中矩形计算结果是:%f\n",val2);
    printf("右矩形计算结果是:%f\n",val3);
    printf("复化梯形计算结果是:%f\n",val4);
    printf("辛普森计算结果是:%f\n",val5);
    printf("高斯-勒让德计算结果是:%f\n",val6);
}




