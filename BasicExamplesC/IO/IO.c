#include <stdio.h>
#pragma warning(disable : 4996)

// call function in other c file
extern void fileIOdemo();

void main() {


	char buffer[100];
	int read;

	printf("enter a value: \n");
	read= scanf("%s", buffer);

	printf("you entered %s\n", buffer);
	printf("%d items successfully read\n", read);

	printf("writing to file\n");
	fileIOdemo(buffer);
}