#include <stdio.h>
#define ARRAY_SIZE 12

void main() {
	srand(time(NULL));
	
	int arr[] = { 1,2,3 };
	int arr2[4];
	int arr3[ARRAY_SIZE]; // size must be a constant

	// invalid array access, will not fail, but return garbage
	for (int i = 0; i <= 3; i++) {
		printf("array value at index %d: %d\n", i, arr[i]);
	}

	printf("****************\n");

	// best to use explicit length information
	for (int i = 0; i < ARRAY_SIZE; i++) {
		arr3[i] = rand()%11;
		printf("array value at index %d: %d\n", i, arr3[i]);
	}
}