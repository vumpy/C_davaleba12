#include<stdio.h>
#define MAXLINE 1000

int mgetline1(char line[],int maxline);
void mystrcat1(char *,char *);

int main(void)
{
    int len;
    char s[MAXLINE],t[MAXLINE];

    putchar('s');
    putchar(':');
    mgetline(s,MAXLINE);
    
    putchar('t');
    putchar(':');
    mgetline(t,MAXLINE);
    
    mystrcat(s,t);

    printf("%s",s);

    return 0;
}



