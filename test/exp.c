#include<stdio.h>
#include<math.h>
double myexp(double x, int n)
{
    int i;
    double y=1,xi=1,p=1;
    for(i=1;i<n;i++)
    {
        xi*=x;
        p*=i;
        y+=xi/p;
    }
    return y;
}
int main()
{
    double x=1.0;
    int n=20;
    double y = myexp(x,n);
    printf("%18.16f\t%18.16f\n",y,exp(1.0));

}
