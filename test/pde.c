#include<stdio.h>
#include<math.h>
#define PI atan(1.0)*4
#define N 100
double f(double x,double t,double u)
{
    return u-sin(x-u*t);
}
int main()
{
    double u[N+1],x,t;
    int i;
    for(i=0;i<=N;i++)
    {
        x = i*2*PI/N;
        double a=-2.1, b=2.1, c;
        while(b-a>1.0E-9)
        {
            c = (a+b)/2;
            if(f(x,t,a)*f(x,t,c)>0)
                a=c;
            else if(f(x,t,a)*f(x,t,c)<0)
                b=c;
            else
                break;
        }
        u[i] =c;
    }
    for(i=0;i<=N;i++)
        printf("%6.3f \t %6.3f \n",i*2*PI/N,u[i]);
}
