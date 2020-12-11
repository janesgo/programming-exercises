/*
 * Exercise 1-9. Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main() {
	int c, bl;

	bl = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			bl = 0;
		}
		if (c == ' ') {
			++bl;
			if (bl == 1)
				putchar(c);
		}
	}

	return 0;
}
