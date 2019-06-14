#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable : 4996)

void writeFile(char* text, char* filename) {

	FILE *file= fopen(filename, "w+");
	fprintf(file, text);
	fflush(file);
	fclose(file);
}

char* readFile(char* filename) {

	FILE* filePointer = fopen(filename, "rb");
	if (filePointer == NULL) {
		printf("Error opening file %s!", filename);
		return NULL;
	}

	fseek(filePointer, 0L, SEEK_END);			// seek until the end of the file
	long size = ftell(filePointer);				// get the amount of bytes
	rewind(filePointer);						// rewind file pointer to the beginning
	char* fileContents = malloc((size_t)size + 1L);		// allocate and accout for '\0'
	if (fileContents == NULL) {
		printf("Error allocatind %d bytes!", size + 1);
	}
	else {
		fread(fileContents, 1, size, filePointer);	// read entire file into the buffer		
		fileContents[size] = '\0';
	}
	fclose(filePointer);
	return fileContents;
}