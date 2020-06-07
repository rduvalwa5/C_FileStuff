/*
 * TestFileType.c
 *
 *  Created on: Jun 6, 2020
 *      Author: rduvalwa2
 */
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main() {
    int a;
    char *filename = "/Users/rduvalwa2/cOxigene-workspace/DirFile_Stuff/Test_File_Type/TestFileType.c";
//    printf("File is %s", filename);
    char *dirname = "/Users/rduvalwa2/cOxigene-workspace/DirFile_Stuff/Test_File_Type";

    struct stat buf;
        stat(filename, &buf);
        if (S_ISDIR(buf.st_mode)) {
            printf("%-20s -- is a directory\n", filename);
        } else {
        printf("%-20s -- is not a directory\n", filename);}

        if (S_ISREG(buf.st_mode)) {
            printf("%-20s -- is a FILE\n", filename);
        } else {
        printf("%-20s -- is not a File\n", filename);}

        stat(dirname, &buf);
        if (S_ISDIR(buf.st_mode)) {
            printf("%-20s -- is a directory\n", filename);
        } else {
        printf("%-20s -- is not a directory\n", filename);}

        if (S_ISREG(buf.st_mode)) {
            printf("%-20s -- is a FILE\n", filename);
        } else {
        printf("%-20s -- is not a File\n", filename);}


    return 0;
}
