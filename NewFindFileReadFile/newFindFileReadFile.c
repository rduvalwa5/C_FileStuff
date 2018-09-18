/*
 * newFindFileReadFile.c
 *
 *  Created on: Sep 17, 2018
 *      Author: rduvalwa2
 *
 *  find\ \ /etc/\ \ -name\ hosts*   //etc/hosts
 */


#include <stdio.h>
#include <string.h>

//struct letter *head = NULL;
//struct letter *current = NULL;


struct file files[100];
char file[100];
int fileMemeber = 0;

void loadArrayOfFiles(char thisFile[]){
	int loadMember = sizeof(files)/sizeof(char);
	if(loadMember < 1){
		loadMember = 0;
	}
	else{loadMember = sizeof(files)/sizeof(char);}
	strcpy(files[loadMember],thisFile);
}



int main( int argc, char *argv[] )  {
	FILE *p;
	char  ch;
	int i = 0;
	for(i=0;i < argc; i++)
	{
		printf("argument %d is %s\n", i, argv[i]);
	}

	char file1[] = "File name 1";
	char file2[] = "File 2 of different size";
	char file3[] = "File 3 name 3";
	char file4[] = "File 4 name \\four";
	char file5[] = "File 5 name 5:";
	char file6[] = "File 6 \"name 6;";

	int a = 0;
	struct file files[20];
//	char * theseFiles[] = {"File name 1", "File 2 different size", "File 3 name 3","File 4 name \four","File 5 name 5:","File 6 name 6;"};

	char * theseFiles[] = {file1,file2,file3,file4,file5,file6};

	printf("%s\n", "Start print of theseFiles");
	for(a =  0; a < 6; a++){

		printf("%s\n", theseFiles[a]);
	}

	loadArrayOfFiles(files,theseFiles);

/*
	for(a = 0; a < 6; a++){
		strcpy(files[a].fileName,theseFiles[a]);
	}
*/
	printf("\n%s\n", "Start print files");
	for(a =  0; a < 6; a++){
		printf("%s\n", files[a].fileName);
	}

    p = popen(argv[1],"r"); /* Unix */
    if( p == NULL){
        puts("Unable to open process");
        return(1); }

    while( (ch=fgetc(p)) != EOF){
        putchar(ch);
        while(ch != '\n'){
        	myFile[myFileMem] = ch;
        	myFileMem++;
        }
        insertLetter(ch);
         }
    	printf("\n");

}

