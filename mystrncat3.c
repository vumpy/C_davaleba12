#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mystrncat3(char *str1, char *str2, char *dest, int n) {
    while(*str1) {
        *dest++ = *str1++;
    }
    while(n-- >0) {
        *dest++ = *str2++;
    }

    *dest = '\0';
}
