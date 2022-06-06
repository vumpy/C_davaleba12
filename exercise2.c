#include<stdio.h>
#define MAXLINE 1000

int mgetline2(char s[],int max);
int strend2(char *s,char *t);
int mystrlen2(char *t);

int main(void)
{
    char s[MAXLINE],t[MAXLINE];
    int ret;
    mgetline(s,MAXLINE);
    mgetline(t,MAXLINE);
    ret = strend(s,t);
    printf("%d",ret);
    return 0;
}


