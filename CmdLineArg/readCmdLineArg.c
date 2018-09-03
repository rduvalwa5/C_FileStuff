/*
 * readCmdLineArg.c
 *
 *  Created on: Sep 2, 2018
 *      Author: rduvalwa2
 */

#include <stdio.h>

int main( int argc, char *argv[] )  {

	printf("Arguments are: %s, %s, %s \n", argv[0] , argv[1], argv[2]);

   if( argc == 3 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc != 3 ) {
      printf("Expect command and two argument.\n");
   }
   else {
      printf("Two argument expected.\n");
   }

   printf("Argv0 is %s\n",argv[0]);
   printf("Argv1 is %s\n",argv[1]);
   printf("Argv2 is %s\n",argv[2]);
}
