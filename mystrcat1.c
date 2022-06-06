#include<stdio.h>

void mystrcat(char *s,char *t)
{
    while(*s!='\0')
        s++;
    s--;             /* goes back to \0 char */
    while((*s=*t)!='\0')
    {   
        s++;
        t++;
    }
}
