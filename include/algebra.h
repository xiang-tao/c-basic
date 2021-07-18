/*
 *Notes:该文件是一个头文件，包含了各种函数功能
 * */
#ifndef algebra_h

#define algebra_h

#include<stdio.h>
#include<math.h>

// isprime函数的作用是判断一个整数是否是素数
// 参数：输入一个整数
// 返回：若是素数，返回1；否则返回0;
int isprime(int m)
{
    int i;
    for(i=2;i*i<=m;i++)
    {
        if(m%i==0)
            return 0;
    }
    return 1;
}
//定积分左矩形公式
double l_rectangle(double a,double b, double (*f)(double x),int n)
{
    int i;
    double h=(b-a)/n;
    double xL = a,sum=0;
    for(i=0;i<n;i++)
    {
        sum += (*f)(xL)*h;
        xL += h;
    }
    return sum;
}

//定积分右矩形公式
double r_rectangle(double a,double b, double (*f)(double x),int n)
{
    int i;
    double h=(b-a)/n;
    double xR = a+h,sum=0;
    for(i=0;i<n;i++)
    {
        sum += (*f)(xR)*h;
        xR += h;
    }
    return sum;
}

//定积分中矩形公式
double c_rectangle(double a,double b, double (*f)(double x),int n)
{
    int i;
    double h=(b-a)/n;
    double xC = a+h/2,sum=0;
    for(i=0;i<n;i++)
    {
        sum += (*f)(xC)*h;
        xC += h;
    }
    return sum;
}

//定积辛普森公式
double simpson(double a,double b, double (*f)(double x),int n)
{
    int i;
    double h=(b-a)/n;
    double xL,xC,xR=a,sum=0;
    for(i=0;i<n;i++)
    {
        xL=xR;
        xC=xL+h/2;
        xR=xL+h;
        sum += (*f)(xL)+4*(*f)(xC)+(*f)(xR);
    }
    sum = sum/6*h;
    return sum;
}

//定积分复化梯形公式
double trapezoid(double a,double b, double (*f)(double x),int n)
{
    int i;
    double h=(b-a)/n;
    double xL = a,xR=a+h,sum=0;
    for(i=0;i<n;i++)
    {
        sum += (*f)(xL)+(*f)(xR);
        xL += h;
        xR += h;
    }
    return sum/2*h;
}

//定积分高斯-勒让德公式
double gauss_legendre(double a,double b, double (*f)(double x),int n)
{
    int i;
    double h=(b-a)/n;
    double xa = a,xb=b,sum=((*f)(xa)+(*f)(xb))/2;
    for(i=0;i<n-1;i++)
    {
        xa += h;
        sum += (*f)(xa);
    }
    return sum*h;
}

// 公因数求解
int gongyinshu(int a, int b)
{
    int t;
    if(b>a)
    {
        t=b;
        b=a;
        a=t;
    }
    int r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    printf("他们的公因数是:%d\n",b);
    return 0;
}

//二分法
double erfenfa(double a,double b,double (*p)(double x),double err)
{
    double fa=(*p)(a),fb=(*p)(b),fc,c;
    int k=0;
    while(fabs(b-a)>err)
    {
        k+=1;//记录循环次数
        c=(a+b)/2;
        fc = (*p)(c);
        if(fa*fc>0)
        {
            a=c;
            fa=fc;
        }
        else if(fa*fc<0)
        {
            b=c;
            fb=fc;
        }
        else
            break;
    }
    printf("二分法迭代的次数是:%d\n",k);
    return c;
}

//牛顿迭代法
double niudun(double a,double b,double (*f)(double x),\
        double (*df)(double x),double err)
{
    if(fabs((*f)(0))<1)
    {
        double t = a;
        a = b;
        b = t;
    }
    int k=0;
    double x1=b;
    double x2=x1-(*f)(x1)/(*df)(x1);
    while(fabs((*f)(x2)-(*f)(x1))>err)
    {
        x1 = x2;
        x2=x1-(*f)(x1)/(*df)(x1);
        k+=1;
    }
    printf("牛顿法迭代的次数是:%d\n",k);
    return x2;
}

//用f'(x_0)代替f'(x_n)的牛顿迭代法
double first_niudun(double a,double b,double (*f)(double x),\
                    double (*df)(double x),double err)
{
    if(fabs((*f)(0))<1)
    {
        double t = a;
        a = b;
        b = t;
    }
    int k=0;
    double x1=b;
    double df0 = (*df)(x1);
    double x2=x1-(*f)(x1)/df0;
    while(fabs((*f)(x2)-(*f)(x1))>err)
    {
        x1 = x2;
        x2=x1-(*f)(x1)/df0;
        k+=1;
    }
    printf("固定导数的牛顿法迭代的次数是:%d\n",k);
    return x2;
}

//割线迭代法
double gexianfa(double a,double b,double (*f)(double x),\
        double err)
{
    if(fabs((*f)(0))<1)
    {
        double t = a;
        a = b;
        b = t;
    }
    int k=0;
    double x1=a;
    double x2=(fabs((*f)(x1))*b+fabs((*f)(b))*x1)/\
              (fabs((*f)(b))+fabs((*f)(x1)));
    while(fabs((*f)(x2)-(*f)(x1))>err)
    {
        x1 = x2;
        x2=(fabs((*f)(x1))*b+fabs((*f)(b))*x1)/\
                (fabs((*f)(b))+fabs((*f)(x1)));
        k+=1;
    }
    printf("割线迭代法迭代的次数是:%d\n",k);
    return x2;
}

void MatrixMulti(int m,int n,int p,\
                int *a,int *b,int *c)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
            {
                *(c+i*p+j)+=*(a+i*n+k)*(*(b+k*p+j));
            }
        }
    }
}

//下面是一些排序算法函数
//冒泡排序
int maopao(int *a,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(a[j-1]>a[j])
            {
                t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }
        }
    }
}



#endif

