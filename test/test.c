#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50] = "xiang tao.sssssss";
    char s2[30] = "-xiangtandaxue.";
    char *p = s1,*q=s2;
    for(;*p++;);
    for(;*p++=*q++;);
    puts(s1);
    for(int i=0;i<50;i++)
    {
        printf("%3c",s1[i]);
    }
    for(int i=0;i<50;i++)
    {
        printf("%4d",s1[i]);
    }
    printf("%s",s1);
    putchar('\n');
}
