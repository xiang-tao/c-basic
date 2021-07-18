#include<stdio.h>
int main()
{
    int a[6]={0};
    int b[3][2] = {0};
    int i,j;
    printf("%d\t%d\t%d\n",a,&a,&a[0]);
    printf("%d\t%d\t%d\t%d\n",b[1],*(b+1),&b[1][0],*(b+2));
    for(i=0;i<6;i++)
    {
        printf("%p\t",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",&b[i][j]);
        }
        putchar('\n');
    }
    for(i=0;i<3;i++)
    {
        printf("%d\t",b[i]);
    }
}
