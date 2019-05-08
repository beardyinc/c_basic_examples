#include <stdio.h>


void fileIOdemo(char* text) {
	FILE *file= fopen("foo.txt", "w+");
	fprintf(file, text);
	fflush(file);
	fclose(file);
}