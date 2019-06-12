#include "MyFunctions.h"

void main() {
	double franzi = 15.4;
	double karli = 18.3;

	double res = mult(franzi, karli);
	printNum(res);

	double dividend = 17;
	double divisor = 8;
	double res2 = divide(dividend, divisor);
	printNum(res2);


	double res3 = divideRef(&dividend, &divisor);
	printNum(res3);

	struct Address addr = { "Linz", "4020", "Peter Behrens Platz", 10 };
	modify(&addr);

	printAddress(&addr);


}