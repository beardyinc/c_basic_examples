#include <stdio.h>

void switchCaseDemo() {
	srand(time(NULL));
	int a = rand() % 3;      // Returns a pseudo-random integer between 0 and 2.
	printf("PRNG yields %d\n", a);

	switch (a) {
		case 0:
			printf("value was zero");
			break;
		case 1:
			printf("value was one");
			break;
		case 2:
			printf("value was two");
			break;
		default: 
			printf("value was anything else");
			break;
	}
}