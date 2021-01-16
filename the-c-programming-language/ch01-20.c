/*
 * Exercise 1-20. Write a program detab that replaces tabs in the input
 * with the proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns. Should n be a
 * variable or a symbolic parameter?
 */

#include <stdio.h>
#define TABSIZE 8

void detab(int tabsize);

int main() {
	int c, i;

	i = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			detab(TABSIZE - i);
			i = 0;
		}
		else if (c == '\n') {
			putchar(c);
			i = 0;
		}
		else {
			putchar(c);
			++i;
		}
		if (i == TABSIZE)
			i = 0;
	}
	return 0;
}

void detab(int ts) {
	for (; ts > 0; --ts)
		putchar(' ');
}
