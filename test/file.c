#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    FILE *fp;
    fp = fopen("./tt.txt","w+");
    if(fp == NULL)
    {
        printf("文件创建失败!\n");
        exit(0);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            fprintf(fp,"%d",i*10+j);
        }
        fprintf(fp,"%d\n",i*10+9);
    }
//    fprintf(fp,"hello!This is my first porgram data");
}
