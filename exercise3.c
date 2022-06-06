#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXSIZE 1000

void mystrncpy3(char *, char *, int);
void mystrncat3(char *, char *, char *, int);
int mystrncmp3(char *, char *, int);

int mystrlen(char *s);

int main(int argc, char *argv[])
{

    char dest[] = "ABCDEF";
    char source[] = "GHIJ";

    mystrncpy(dest, source, 4);
    printf("%s\n", dest);

    char s1[]= "ABCD";
    char t1[]= "EFGHIJ";
    char *d;

    if ((d = (char *) malloc(sizeof(char) * (strlen(s1) + + 4 + 1))) == NULL) {
            printf("unable to allocate memory \n");
            return -1;
        }

    mystrncat(s1, t1, d, 4);
    printf("%s\n", d); /* ABCDEFGH */

    free(d);

    char s2[]= "ABCDEF";
    char t2[]= "ABC";
    int result;

    result = mystrncmp(s2, t2, 3);

    printf("%d\n", result);


    return 0;
}

int mystrnlen(char *s) {
    char *p = s;
    while (*s != '\0') {
        s = s + 1;
    }
    return s - p;
}

