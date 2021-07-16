#include<stdio.h>
#include<math.h>
#define N 8
double SimpleIter(double err,double x)
{
    double y=x;
    x=y-1;
    while(fabs(x-y)>err)
    {
        x=y;
        y=(x+N/x)/2;
    }
    return y;
}
int main()
{
    double err = 1.0e-6;
    double x=1;
    double y=SimpleIter(err,x);
    printf("%f\n",y);
}
