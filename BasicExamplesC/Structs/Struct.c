#include <stdio.h>

struct Address {
	char city[50]; //must pre-initialize memory!
	int zipCode;
	char streetName[50];
	int number;
} home ; // declares a global variable

typedef struct { //allows using the "person" type without "struct"
	char name[50];
	int age;
	char sex;
} Person;



void main() {
	struct Address bfiHQ; //create the struct

	// initialize it:
	strcpy(bfiHQ.city, "Linz");
	bfiHQ.zipCode = 4020;
	strcpy(bfiHQ.streetName, "Muldenstrasse");
	bfiHQ.number = 5;

	

	//...or with an initializer:
	struct Address bfiEuro = { "Linz", 4020, "Europaplatz", 13 };


	printf("Address: %s %d, %d %s\n", bfiHQ.streetName, bfiHQ.number, bfiHQ.zipCode, bfiHQ.city);
	printf("Address: %s %d, %d %s\n", bfiEuro.streetName, bfiEuro.number, bfiEuro.zipCode, bfiEuro.city);

	//...as typedef without "struct" in front
	Person millie = { "Millie", 35, 'f' };
}
