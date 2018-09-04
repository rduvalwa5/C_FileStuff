/*
 * readCmdLineArg.c
 *
 *  Created on: Sep 2, 2018
 *      Author: rduvalwa2
 */

#include <stdio.h>

int main( int argc, char *argv[] )  {
	int i = 0;
	for(i=0;i < argc; i++)
	{
		printf("argument %d is %s\n", i, argv[i]);
	}

}

