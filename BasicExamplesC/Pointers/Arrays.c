#include <stdio.h>
#include <stdlib.h>

void push(int* arr, int index, int maxSize, int value) {
	if (index > maxSize) {
		printf("ERROR > INDEX OUT OF ARRAY BOUNDS!\n");
	}
	else if (index < 0) {
		printf("ERROR > INVALID NEGATIVE ARRAY INDEX!\n");
	}
	 {
		*(arr + index) = value;
	}
}

void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

int* allocate(int size) {
	int* arr = (int*)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}

	return arr;
}