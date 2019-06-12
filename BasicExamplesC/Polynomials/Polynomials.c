#include "Polynomials.h"
#include <math.h>


double calculatefirstDerivative(double x, int a, int b, int c, int d, int e)
{
	// ax^4 + bx^3 + cx^2 + dx + e
	return x * exp(a, 3) + x * exp(b, 2) + x * c * d;
}

double calculateSecondDerivative(double x, int a, int b, int c, int d, int e)
{
	return x * exp(a, 2) + x * exp(b) + c;
}
