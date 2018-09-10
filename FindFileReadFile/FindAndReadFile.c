/*
 * FindAndReadFile.c
 *
 *  Created on: Sep 8, 2018
 *      Author: rduvalwa2
 *
 *   find\ \ /etc/\ \ -name\ hosts
 *   find\ \ //Users/rduvalwa2\ \ -name\ hosts.txt    //Users/rduvalwa2/hosts.txt
 */
#include <stdio.h>
#include <strings.h>

//void findFile();
//void openFile();
//void readFile();



int main( int argc, char *argv[] )
{
	printf("argument %s %s expected file %s\n",argv[0], argv[1], argv[2]);
	FILE *p;
	char findFileResult[200];
	char  ch;

//    p = popen("ver","r");   /* DOS */
    p = popen(argv[1],"r"); /* Unix */
    if( p == NULL){
        puts("Unable to open process");
        return(1); }

    int i = 0;
    while( (ch=fgetc(p)) != EOF){
        putchar(ch);
        findFileResult[i] = ch;
 //       printf("%c",result[i]);
        i++;
        findFileResult[i] = '\0';
    }

    int a = 0;
    while( findFileResult[a] != '\0'){
    	printf("%c", findFileResult[a]);
    	a++;}
    pclose(p);
    printf("Reading file %s\n", argv[2]);

    puts(findFileResult);
    FILE *fptr;
    fptr = fopen(argv[2],"r");
        if (fptr == NULL)
        {
            printf("Cannot open file %c\n", &findFileResult);
            exit(0);
        }

    char b = fgetc(fptr);
    while (b != EOF){
        printf ("%c", b);
        b = fgetc(fptr);}
    fclose(fptr);

}

//void readFile(){}

//void openFile(){}
