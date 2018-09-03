/*
 * findFile.c
 *
 *  Created on: Sep 1, 2018
 *      Author: rduvalwa2
 */

#include <stdio.h>

int main () {
   FILE *fp;
   int c;
   printf("Start program!\n");
   char fileX[] = {'f','i','l','e','.','t','x','t','\0'};
   char fileY[] = "file.txt";
   printf("fileX %s\n",fileX);
   printf("fileY %s\n",fileY);

   fp = fopen(fileX,"r");
	while(1) {
	      c = fgetc(fp);
	      if( feof(fp) ) {
	         break ;
	      }
	      printf("%c", c);
	   }

   fclose(fp);

   return(0);
}
