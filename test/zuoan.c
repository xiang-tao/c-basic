#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    for(a=0;a<2;a++)
    {
        for(b=0;b<2;b++)
        {
            for(c=0;c<2;c++)
            {
                for(d=0;d<2;d++)
                {
                    for(e=0;e<2;e++)
                    {
                        for(f=0;f<2;f++)
                        {
                            if(a+b>=1 && a+e+f>=2 && \
                               a+d<2 && b+c!=1 && \
                               c+d==1 && e<=d)
                            {
                                printf("%s\n",a ? "A参与作案" : "A没有参与作案");
                                printf("%s\n",b ? "B参与作案" : "B没有参与作案");
                                printf("%s\n",c ? "C参与作案" : "C没有参与作案");
                                printf("%s\n",d ? "D参与作案" : "D没有参与作案");
                                printf("%s\n",e ? "E参与作案" : "E没有参与作案");
                                printf("%s\n",f ? "F参与作案" : "F没有参与作案");
                            }
                        }
                    }
                }
            }
        }
    }
}
