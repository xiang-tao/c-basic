#include <stdio.h>
#include <math.h>

int main()
{
    float a=0.0,b=1.0;
    float y=1.0;
    float x=0.0;
    while(b-a>pow(10,-6))
    {
    x=(a+b)/2;
    y=pow(x,2)+2*x+sin(x)-1;
    if(y<0)
        a=x;
    else
        b=x;
    }
    printf("%f\n",x);
}
