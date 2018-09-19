/*
 * FindAndReadFile.c
 *  Created on: Sep 8, 2018
 *      Author: rduvalwa2
 *
 *      https://www.tutorialspoint.com/data_structures_algorithms/linked_list_program_in_c.htm
 *
 *   find\ \ /etc/\ \ -name\ hosts*   //etc/hosts
 *   find\ \ //Users/rduvalwa2\ \ -name\ hosts.txt    //Users/rduvalwa2/hosts.txt
 */
#include <stdio.h>
#include <string.h>

// define structure of linked element
struct letter {
   char letter;
   struct letter *next;
};

struct letter *head = NULL;
struct letter *current = NULL;

//insert link at the first location
void insertLetter(char letter) {
   //create a link
   struct letter *link = (struct letter*) malloc(sizeof(struct letter));
   link->letter = letter;
   //point it to old first node
   link->next = head;
   //point first to new first node
   head = link;
}

void reverseList(struct letter** head_ref) {
   struct letter* prev   = NULL;
   struct letter* current = *head_ref;
   struct letter* next;

   while (current != NULL) {
      next  = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }
   *head_ref = prev;
}

//display the list
void printList() {
   struct letter *ptr = head;
   printf("the list \n");
   //start from the beginning
   while(ptr != NULL) {
      printf("%c",ptr->letter);
      ptr = ptr->next;
   }
   printf("end of list\n");
}

int main( int argc, char *argv[] )
{
	printf("argument %s %s expected file %s\n",argv[0], argv[1], argv[2]);
	FILE *p;
//	char findFileResult[200];
	char  ch;
	int aa = 0;
	char xx = 'a';
	int sizeOfArg2 = sizeof(argv[2])/sizeof(xx);
	printf("Size of arg2 %d\n",sizeOfArg2);
	for(aa = 0; aa < (sizeof(argv[2])/argv[2][0]); aa++){
		printf("%d %c",aa, argv[2][aa]);
	}

//	int sizeArgv2 = sizeof(arg2/arg2[0]);
//	printf("Size of argv2 is %d\n", sizeArgv2);

//    p = popen("ver","r");   /* DOS */
    p = popen(argv[1],"r"); /* Unix */
    if( p == NULL){
        puts("Unable to open process");
        return(1); }

//    int i = 0;
    while( (ch=fgetc(p)) != EOF){
//    	printf("%c",ch);
        putchar(ch);
        insertLetter(ch);
//        findFileResult[i] = ch;
 //       printf("%c",result[i]);
//        i++;
         }
//      findFileResult[i] = '\0';
    	printf("\n");
    reverseList(&head);
    printList();

//    int a = 0;
//    while( findFileResult[a] != '\0'){
//    	printf("%c", findFileResult[a]);
//    	a++;}
    pclose(p);
    printf("Reading file %s\n", argv[2]);

//    char const * found = findFileResult;
    char const * expected = argv[2];
//    printf("found is %s size is %d\n", found, sizeof(findFileResult)/sizeof(findFileResult[0]));
//    printf("expected is %s size is %d\n", expected, sizeof(argv[2])/sizeof(xx));
//    printf("compare expected to found %d\n",strcmp(found, expected));

//    puts(findFileResult);
    FILE *fptr;
    fptr = fopen(argv[2],"r");
 //   fptr = fopen(found,"r");
    if (fptr == NULL)
        {
            printf("Cannot open file %s\n", argv[2]);
            exit(0);
        }

    char b = fgetc(fptr);
    while (b != EOF){
        printf ("%c", b);
        b = fgetc(fptr);}
    fclose(fptr);

}
