#include <stdio.h>
#include "MyFunctions.h"

double mult(double d1, double d2) {
	return d1 * d2;
}

double divide(double dividend, double divisor) {
	double result = dividend / divisor;

	return result;
}

double divideRef(double* dividend, double* divisor) {
	double result = (*dividend) / (*divisor);
	*dividend = 167;
	return result;
}


void printNum(double num) {
	printf("Number has the value %lf\n", num);
}

void printText(char* str) {
	printf("String has the value %s\n", str);
}

void printAddress(struct Address* address)
{
	printf("Address: %s %d, %s %s\n", address->streetName, address->number, address->zipCode, address->city);
}

void modify(struct Address* address){
	if (address->zipCode[0] != 'A' && address->zipCode[1] != '-') {
		char zip1 = address->zipCode[0];
		char zip2 = address->zipCode[1];
		char zip3 = address->zipCode[2];
		char zip4 = address->zipCode[3];

		char zipCodeNew[7];
		zipCodeNew[0] = 'A';
		zipCodeNew[1] = '-';
		zipCodeNew[2] = zip1;
		zipCodeNew[3] = zip2;
		zipCodeNew[4] = zip3;
		zipCodeNew[5] = zip4;
		zipCodeNew[6] = '\0';

		strcpy(address->zipCode, zipCodeNew);
	}
}
