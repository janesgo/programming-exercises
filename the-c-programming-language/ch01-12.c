/*
 * Exercise 1-12. Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c, wspace;

	wspace = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (wspace == OUT) {
				putchar('\n');
				wspace = IN;
			}
		}
		else {
			putchar(c);
			wspace = OUT;
		}
	}

	return 0;
}
