#include<stdio.h>
int swpa(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
    return 0;
}
int main()
{
    int a=3,b=5;
    printf("%d %d\n",a,b);
    swpa(&a,&b);
    printf("%d %d\n",a,b);

}
