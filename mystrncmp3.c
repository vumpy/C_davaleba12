#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrncmp3(char *lhs,char *rhs, int n)
{
    for(; *lhs == *rhs; lhs++,rhs++)
        if( *lhs == '\0' || --n <=0)
            return 0;
    return *lhs - *rhs;

}
