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

  p = popen("uname -a ","r"); /* Unix */
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
/*
 UNAME(1)                  BSD General Commands Manual                 UNAME(1)

NAME
     uname -- Print operating system name

SYNOPSIS
     uname [-amnprsv]

DESCRIPTION
     The uname utility writes symbols representing one or more system characteristics to the standard output.

     The following options are available:

     -a      Behave as though all of the options -mnrsv were specified.

     -m      print the machine hardware name.

     -n      print the nodename (the nodename may be a name that the system is known by to a communications network).

     -p      print the machine processor architecture name.

     -r      print the operating system release.

     -s      print the operating system name.

     -v      print the operating system version.

     If no options are specified, uname prints the operating system name as if the -s option had been specified.

SEE ALSO
     hostname(1), machine(1), sw_vers(1), uname(3)

STANDARDS
     The uname utility conforms to IEEE Std 1003.2-1992 (``POSIX.2'').  The -p option is an extension to the standard.

BSD                            November 9, 1998                            BSD
 */
