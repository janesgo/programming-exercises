/*
 * Exercise 1-2. Experiment to find out what happens when prints's argument
 * string contains \c, where c is some character not listed above.
 */

#include <stdio.h>

int main() {
	printf("Hello, world\m");
	printf("Hello, world\g");
	printf("Hello, world\p");
	printf("Hello, world\z");
	return 0;
}
