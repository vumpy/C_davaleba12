#include<stdio.h>

int mystrlen2(char *t)
{
    char *p;
    p=t;

    while(*p!='\0')
        ++p;

    return p-t;
}
