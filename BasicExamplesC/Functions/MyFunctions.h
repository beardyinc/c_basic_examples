#pragma once

struct Address {
	char city[50]; //must pre-initialize memory!
	char zipCode[7];
	char streetName[50];
	int number;
};

// multiplies two doubles and returns the result
double mult(double, double);

double divide(double dividend, double divisor);

double divideRef(double *d1, double *d2);

void printNum(double num);

void printText(char* str);

void printAddress(struct Address* address);

void modify(struct Address *address);