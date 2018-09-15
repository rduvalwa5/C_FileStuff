/*
 * readCmdLineArg.c
 *
 *  Created on: Sep 2, 2018
 *      Author: rduvalwa2
 *   find\ \ /etc/\ \ -name\ hosts
 *   windows "arg_1 as string"  arg2  arg3-dash  arg4:colon 'arg5 apost'  `arg6 with\``  arg7 with quotes
 */

#include <stdio.h>

int main( int argc, char *argv[] )  {
	int i = 0;
	for(i=0;i < argc; i++)
	{
		printf("argument %d is %s\n", i, argv[i]);
	}
}
/*
argument 0 is C:\Users\RDuval.C1246895-XPS\c_workspace\CmdLineArg\Debug\CmdLineArg.exe
argument 1 is arg_1 as string
argument 2 is arg2
argument 3 is arg3-dash
argument 4 is arg4:colon
argument 5 is 'arg5
argument 6 is apost'
argument 7 is `arg6
argument 8 is with\``
argument 9 is arg7
argument 10 is with
argument 11 is quotes
 */
