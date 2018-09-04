/*
 * readCmdLineArg.c
 *
 *  Created on: Sep 2, 2018
 *      Author: rduvalwa2
 */

#include <stdio.h>

int main( int argc, char *argv[] )  {

	printf("Arguments are: %s %s\n", argv[0] , argv[1]);

   if( argc == 2 ) {
      printf("Syntax is readCmdLineArg.exe argument\n");
      printf("Expect command and two argument.\n");
   }

   printf("Argv0 is %s\n",argv[0]);
   printf("Argv1 is %s\n",argv[1]);
   printf("Argv2 is %s\n",argv[2]);
}
