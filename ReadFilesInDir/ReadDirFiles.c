/* ReadDirFiles.c
 *
 *  https://www.gnu.org/software/libc/manual/html_node/Simple-Directory-Lister.html
 */

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main( int argc, char *argv[] )  {
   if( argc == 2 ) {
	   printf("One expected Argument is: %s \n", argv[1]);
   }
   else if( argc != 2 ) {
      printf("Expect command and one argument, the directory path.\n");
   }
  DIR *dp;
  struct dirent *ep;

  dp = opendir (argv[1]);
  if (dp != NULL)
    {
      while (ep = readdir (dp))
        puts (ep->d_name);
      (void) closedir (dp);
    }
  else
    perror ("Couldn't open the directory\n");

  return 0;
}
