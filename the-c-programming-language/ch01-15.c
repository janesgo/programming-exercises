/*
 * Exercise 1-15. Rewrite the temperature conversion program of
 * Section 1.2 to use a function for conversion.
 */

#include <stdio.h>

float fahrcelsius(float f);

int main() {

	int lower, upper, step;
	float fahr;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		printf("%3.0f %6.1f\n", fahr, fahrcelsius(fahr));
		fahr = fahr + step;
	}
}

float fahrcelsius(float fahr) {
	return (5.0 / 9.0) * (fahr - 32.0);
}
