/*
 * arrayCopyExample.c
 *
 *  Created on: Sep 17, 2018
 *      Author: rduvalwa2
 *
 *     find\ \ /etc/\ \ -name  hosts*
 */

#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] )  {
	struct files { char fName[100];};

	struct files myFiles[100];

	FILE *p;
	char  ch;
	int i = 0;
	printf("%d\n", argc);
	for(i=0;i < argc; i++)
	{
		printf("argument %d is %s\n", i, argv[i]);
	}

	for(i = 0; i< argc ; i++){
		strcpy(myFiles[i].fName, argv[i]);
//		printf("%s\n", myFiles[i].fName);
		}
//	printf("End of collection process\n");
	printf("\n%s\n", "Start print argument input in files array.");

	for(i =  0; i < argc; i++){
		printf("%s\n", myFiles[i].fName);
	}

	  char popArgument[200];
	  strcpy(popArgument,strcat(strcat(myFiles[1].fName,"  "), myFiles[2].fName));

	  printf("\npop argument is \" %s \"\n",popArgument);

    p = popen(popArgument,"r");
    if( p == NULL){
        puts("Unable to open process");
        return(1); }

    while( (ch=fgetc(p)) != EOF){
        putchar(ch);
         }

}

