#include <stdio.h>
#include <stdlib.h>

//void main() {
//	int a = 4;
//
//	if (a < 5) {
//		printf("number was smaller than 5");
//	}
//	else {
//		printf("number was greater than 5");
//	}
//}

//void main() {
//	srand(time(NULL));  
//	int a = rand() % 101;      // Returns a pseudo-random integer between 0 and 100.
//  printf("PRNG yields %d\n", a);
//
//	if (a < 10) {
//		printf("number was smaller than 10\n");
//	}
//	if (a < 50) {
//		printf("number was smaller than 50\n");
//
//	}if (a < 100) {
//		printf("number was smaller than 100\n");
//	}
//	else {
//		printf("number was greater than 100\n");
//	}
//}

void IfElseDemo3() {
	srand(time(NULL));  
	int a = rand() % 101;      // Returns a pseudo-random integer between 0 and 100.
	printf("PRNG yields %d\n", a);

	if (a < 10) {
		printf("number was smaller than 10\n");
	}
	else if (a < 50) {
		printf("number was smaller than 50\n");
	}
	else if (a < 100) {
		printf("number was smaller than 100\n");
	}
	else {
		printf("number was greater than 100\n");
	}
}