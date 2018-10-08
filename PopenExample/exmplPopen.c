/*
 * exmplPopen.c
 *
 *  https://c-for-dummies.com/blog/?p=1418
 *  find\ \ /etc/\ \ -name\ hosts
 *  find\ //Users/rduvalwa2/Desktop\ -name\ test_library.py
 *  uname -a
 */

#include <stdio.h>
#include <string.h>


int main( int argc, char *argv[] )
{
	printf("argument %s %s\n",argv[0], argv[1]);
    FILE *p;
    char  ch;
    char result[200];

   p = popen(argv[1],"r"); /* Unix */
    if( p == NULL)
    {
        puts("Unable to open process");
        return(1);
    }
    int i = 0;
    while( (ch=fgetc(p)) != EOF){
        putchar(ch);
        result[i] = ch;
        i++;
        result[i] = '\0';
    }
    pclose(p);
    int a = 0;
    while( result[a] != '\0'){
    	printf("%c", result[a]);
    	a++;
    }
    return(0);
}
