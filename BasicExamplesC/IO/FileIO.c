#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

void writeFile(char* text, char* filename) {

	FILE *file= fopen(filename, "w+");
	fprintf(file, text);
	fflush(file);
	fclose(file);
}

char* readFile(char* filename) {

	FILE* srcCode = fopen(filename, "r+");
	if (srcCode == NULL) {
		printf("Error opening file %s!", filename);
		return NULL;
	}

	char* fileContents = malloc(512);
	int filledItems = fscanf(srcCode, "%[^\n]s", fileContents);
	fclose(srcCode);
	return fileContents;
}