/*
 * structSimple.c
 *
 * https://fresh2refresh.com/c-programming/c-array-of-structures/
 * Created on: Sep 14, 2018      Author: rduvalwa2
 *
 *Focus is on using a structure and strcpy() function to load a an array from another array.
 *Note that memory management requires that both arrays are of equal size:
 *
 */


#include <stdio.h>
#include <string.h>


struct file{char fileName[100];};
struct file myFile;

void loadArrayOfFiles(struct file dest[], char * src[]){
	int a = 0;
	for(a = 0; a < 6; a++){
		strcpy(dest[a].fileName,src[a]);
	}
}


int main(){
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

}
