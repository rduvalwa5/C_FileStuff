/*
 * TestFileOrDir.c
 *
 *  Created on: Sep 2, 2018
 *     https://stackoverflow.com/questions/4553012/checking-if-a-file-is-a-directory-or-just-a-file
 */
#include <stdio.h>

#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

int isFile(const char* name)
{	DIR* directory = opendir(name);
    if(directory != NULL)
    { closedir(directory); return 0;}
    if(errno == ENOTDIR)
    	{return 1;}
    return -1;
}

int main(void)
{
    const char* file = "./TestFileOrDir.c";
    const char* directory = "./";

    printf("Is %s a file? %s.\n", file,
     ((isFile(file) == 1) ? "Yes" : "No"));

    printf("Is %s a directory? %s.\n", directory,
     ((isFile(directory) == 0) ? "Yes" : "No"));

    return 0;
}
