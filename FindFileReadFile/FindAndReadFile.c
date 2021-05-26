/*
 * FindAndReadFile.c
 *  Created on: Sep 18, 2018
 *      Author: rduvalwa2
 *
 *   find\ \ /etc/\ \ -name\ hosts
 *   find\ \ //Users/rduvalwa2\ \ -name\ hosts.txt    //Users/rduvalwa2/hosts.txt
 *	 find\ //Users/rduvalwa2/Desktop\ -name\ test_library.py
 *   find\ \ /etc/\ \ -name  hosts*
 *
 *   /Users/rduvalwa2/eclipse-c-workspace/ReadDirFile/TestFile.txt
 */

#include <stdio.h>
#include <string.h>



int main( int argc, char *argv[] )  {

	struct files { char fName[100];};
	struct foundFiles{char foundName[500];};

	struct files arguStrings[100];

	struct foundFiles filesFound[100];

	FILE *fp;
	FILE *p;
	char  ch;
	int i = 0;
	printf("%d\n", argc);
	for(i=0;i < argc; i++)
	{
		printf("argument %d is %s\n", i, argv[i]);
	}

	for(i = 0; i< argc ; i++){
		strcpy(arguStrings[i].fName, argv[i]);
		}
	printf("\n%s\n", "Start print argument input in files array.");

	for(i =  0; i < argc; i++){
		printf("%s\n", arguStrings[i].fName);
	}

	  char popArgument[200];
	  strcpy(popArgument,strcat(strcat(arguStrings[1].fName,"  "), arguStrings[2].fName));

	  printf("\npop argument is \" %s \"\n",popArgument);

    p = popen(popArgument,"r");
    if( p == NULL){
        puts("Unable to open process");
        return(1); }
    int Count = 0;
    int foundFileCounter = 0;
	char foundFile[100];
    while( (ch=fgetc(p)) != EOF){
//        putchar(ch);
    	if(ch != '\n'){foundFile[Count] = ch;}
        if(ch == '\n'){
        	for(i = 0; i< Count;i++){printf("%c",foundFile[i]);}
        	strcpy(filesFound[foundFileCounter].foundName,foundFile);
        	Count = 0;
        	foundFileCounter++;
        }
        foundFile[Count] = ch;
        Count++;
        }
    printf("\n files found %d \n",foundFileCounter );
    for(i=0; i <  foundFileCounter; i++){
    	printf("%d %s\n", i, filesFound[i].foundName);
    }
    for(i=0; i <  foundFileCounter; i++){
    fp = fopen(filesFound[i].foundName,"r");
    		while(1) {
    		      ch = fgetc(fp);
    		      if( feof(fp) ) { printf("EOF"); break ;}
    		      printf("%c", ch);
    		   }
    	fclose(fp);
    }
  }


