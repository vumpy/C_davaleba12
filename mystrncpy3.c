#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mystrncpy3(char *dest,char *source,int n)
{
    while(*source && n-- > 0)
        *dest++ = *source++;

    int extra = mystrnlen(dest) - n;

    while (extra-- > 0) {
        *dest++;
    }

    *dest = '\0';
}
