/*
 * exmplPopen.c
 *
 *  https://c-for-dummies.com/blog/?p=1418
 */


#include <stdio.h>

int main()
{
    FILE *p;
    char ch;

//    p = popen("ver","r");   /* DOS */
   p = popen("ls -l","r"); /* Unix */
    if( p == NULL)
    {
        puts("Unable to open process");
        return(1);
    }
    while( (ch=fgetc(p)) != EOF)
        putchar(ch);
    pclose(p);

    return(0);
}
