#include<stdio.h>
int main()
{
    int hanoi(int n, char s,char m,char t);
    hanoi(3,'A','B','C');
}

int hanoi(int n, char s,char m,char t)
{
    if(n<1)
    {
        printf("Error!");
        return 0;
    }
    else if(n==1)
        printf("%c---->%c\n",s,t);
    else
    {
        hanoi(n-1,s,t,m);
        printf("%c---->%c\n",s,t);
        hanoi(n-1,m,s,t);
    }
}
