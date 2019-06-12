#include <stdio.h>
#pragma warning(disable : 4996)

void fileIOdemo(char* text) {
	FILE *file= fopen("foo.txt", "w+");
	fprintf(file, text);
	fflush(file);
	fclose(file);
}