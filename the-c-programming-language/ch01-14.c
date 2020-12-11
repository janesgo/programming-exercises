/*
 * Exercise 1-14. Write a program to print a histogram of the frequencies
 * of different characters in its input.
 */

#include <stdio.h>

#define HISTCHAR '*'
#define MINCHAR 32
#define MAXCHAR 126
#define NCHARS 95

int main() {
	int c, i, j;
	int chars[NCHARS];

	for (i = 0; i < NCHARS; ++i)
		chars[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c != '\n' && c != '\t' && c >= MINCHAR && c <= MAXCHAR)
			++chars[c - 32];
	}

	for (i = 0; i < NCHARS; ++i) {
		if (chars[i] > 0) {
			printf("%c | ", i + 32);
			for (j = 0; j < chars[i]; ++j)
				putchar(HISTCHAR);
			putchar('\n');
		}
	}

	return 0;
}
