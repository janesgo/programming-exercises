/*
 * Exercise 1-10. Write a program to copy its input to its output, replacing
 * each tab by \t, each backspace by \b, and each backslash by \\. This makes
 * tabs and backspaces visible in an unambiguous way. */

#include <stdio.h>

int main() {
	int c, test;

	test = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");
			test = 1;
		}
		if (c == '\b') {
			printf("\\b");
			test = 1;
		}
		if (c == '\\') {
			printf("\\\\");
			test = 1;
		}
		if (test == 0)
			putchar(c);
	}

	return 0;
}
