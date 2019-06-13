#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

// call function in other c file
extern void writeFile(char *, char* filename);
extern const char* readFile(char*);

void main() {

	//read a file
	const char* fileContents= readFile("c:\\Users\\codersbay\\Documents\\test2.txt");
	printf("Contents of file: \n\n%s\n\n", fileContents);

	free(fileContents);
	fileContents = NULL;



	//write a file
	char buffer[100];
	int read;

	printf("enter a value that will be written to another file: \n");
	read= scanf("%s", buffer);

	printf("you entered %s\n", buffer);

	printf("writing to file\n");
	writeFile(buffer, "foo.txt");
}