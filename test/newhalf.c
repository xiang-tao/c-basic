#include<stdio.h>
#include<math.h>
double f(double x)
{
    return x*x*x+2*x*x+5*x-1;
}
double erfenfa(double a,double b,double (*p)(double x))
{
    double error = 1.0E-2,c;
    double fa=(*p)(a),fb=(*p)(b),fc;
    while(b-a>error)
    {
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
    return c;
}
int main()
{
    double r=erfenfa(0.0,1.0,f);
    printf("root=%.15f\n",r);
}

