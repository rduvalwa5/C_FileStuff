/*
 * readCmdLineArg.c
 *
 *  Created on: Sep 2, 2018
 *      Author: rduvalwa2
 *   find\ \ /etc/\ \ -name\ hosts
 */

#include <stdio.h>

int main( int argc, char *argv[] )  {

//	printf("Arguments are: %s %s %s %s\n", argv[0] , argv[1], argv[2], argv[3]);

//   if( argc == 2 ) {
//      printf("Syntax is readCmdLineArg.exe argument\n");
//      printf("Expect command and two argument.\n");
//   }

	int i = 0;
	for(i=0;i < argc; i++)
	{
		printf("argument %d is %s\n", i, argv[i]);
	}
}
