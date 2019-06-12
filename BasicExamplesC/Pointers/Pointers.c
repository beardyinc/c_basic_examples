#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include "Arrays.h"


void main() {

	char* text = "hello world!";
	int len = strlen(text);

	int l = 0;
	while (*text != '\0') {
		l++;
		text++;
	}

	int size = 10;
	 //int arr[size]; //NOT ALLOWED!
	int* arr = allocate(size);
		
	push(arr, 0, size, 5);
	push(arr, 1, size, 19);
	push(arr, 15, size, 28);
	push(arr, -3, size, 92);
	print(arr, size);
	printf("invalid value at ix 15: %d\n", *(arr + 15));

	printf("invalid value at ix -3: %d\n", *(arr -3));


}