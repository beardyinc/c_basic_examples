#include "Assignment_2c.h"

const char term = '\0';

int len(char* input) {
	int count = 0;
	while (*input != term) {
		input++;
		count++;
	}
	return count;
}

char* reverseString(char* string) {
	int l = len(string);

	char* result = (char*)malloc((l + 1) * sizeof(char));

	for (int i = 0; i < l; i++) {
		char c = string[l - 1 - i];
		result[i] = c;
	}
	result[l] = term;
	return result;
}
char* sortAsc(char* input) {
	int l = len(input);
	//allocate memory for result
	char* output = (char*)malloc((l + 1) * sizeof(char));
	//copy memory onto result
	memcpy(output, input, l+1);

	//sort in-place
	for (int i = 1; i < l; i++) {
		for (int j = 0; j < l - i; j++) {
			if (output[j] > output[j + 1])
			{
				char ch = output[j];
				output[j] = output[j + 1];
				output[j + 1] = ch;
			}
		}
	}
	return output;
}
int countOccurrence(char* input, char c) {
	int l = len(input);
	int count = 0;

	for (int i = 0; i < l; i++) {
		if (input[i] == c) {
			count++;
		}
	}
	return count;
}