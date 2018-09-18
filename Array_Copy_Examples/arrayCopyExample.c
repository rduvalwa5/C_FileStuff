/*
 * arrayCopyExample.c
 *
 *  Created on: Sep 17, 2018
 *      Author: rduvalwa2
 *      find\ \ /etc/\ \ -name\ hosts*   //etc/hosts  inputFile1  inputFile2 inputFile3
 */

#include <stdio.h>
#include <string.h>


//struct file { char * fName[100]};


/*
void loadArrayOfFiles(char thisFile[]){
	int loadMember = sizeof(files)/sizeof(char);
	if(loadMember < 1){
		loadMember = 0;
	}
	else{
		loadMember = sizeof(files)/sizeof(char);
		strcpy(files[loadMember],thisFile);
		}
*/

int main( int argc, char *argv[] )  {
	struct files { char fName[100];};

	struct files myFiles[100];

	int fileMember = 0;

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
		printf("%s\n", myFiles[i].fName);
		}
	printf("End of collection process\n");
	printf("\n%s\n", "Start print files");

	for(i =  0; i < argc; i++){
		printf("%s\n", myFiles[i].fName);
	}

	  char popArgument[200];
//	  strcat(myFiles[2].fName, myFiles[1].fName);
//	  printf("result is %s\n", myFiles[1].fName);
	  strcpy(popArgument,strcat(strcat(myFiles[1].fName,"  "), myFiles[2].fName));


//	  strcat(popArgumenmt, myFiles[2].fName);
	  printf("\n%s\n",popArgument);


    p = popen(popArgument,"r");
    if( p == NULL){
        puts("Unable to open process");
        return(1); }

    while( (ch=fgetc(p)) != EOF){
        putchar(ch);
 //       while(ch != '\n'){
 //       	myFile[myFileMem] = ch;
 //       	myFileMem++;
 //       }
 //       insertLetter(ch);
         }
 //   	printf("\n");

}

