#include <stdio.h>
#include "Assignment_ArraysLoops.h"

double calculatePi(int limit)
{
	int factor = 1;
	double sum = 0;
	for (double i = 1; i <= limit; i += 2) {
		sum += factor*(1 / i);
		factor *= -1;
	}

	return 4 * sum;
}