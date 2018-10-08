/*  exmplPopen.c
 *
 *  To launch and run another program from within your code, use the system() function.
 *  When your code must examine or save that program’s output, use the popen() function.
 * Like system(), popen() starts a second program or process, which is where the p comes from.
 * The open part from popen() is the same open found in the fopen() function. Similar to that
 * function, popen() (say “pee-open”) opens a process for input or output. The popen() function
 * uses a program name as its first argument. The second argument is a file mode, such as "r"
 * to read, "w" to write, or "r+" for both.
 */
#include <stdio.h>

int main()
{
    FILE *p;
    char ch;
    p = popen("ver","r");   /* DOS */
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
