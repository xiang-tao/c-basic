#include<stdio.h>
#include<math.h>
void swap(int *p, int *q);
void swap1(int p, int q);
int main()
{
    int i;
    int a[10] = {9,8,7,6,5,4,3,2,1,0};
    //printf("%p%p\n",&a[0],&a[9]);
    for(i=0;i<10;i++)
        printf("%6d",a[i]);
    putchar('\n');
    for(i=0;i<5;i++)
        //swap(&a[i],&a[9-i]);
        swap1(a[i],a[9-i]);
    for(i=0;i<10;i++)
        printf("%6d",a[i]);
    putchar('\n');
    //printf("%p%p\n",&a[0],&a[9]);
}
void swap(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}
void swap1(int p, int q)
{
    int t = p;
    p = q;
    q = t;
}

