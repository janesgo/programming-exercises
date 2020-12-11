/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging.
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define HISTCHAR '*'
#define MAXLENGTH 10

int main() {
	int c, count, i, j, wspace;
	int histogram[MAXLENGTH];

	count = 0;
	wspace = FALSE;
	for (i = 0; i < MAXLENGTH; ++i)
		histogram[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			wspace = FALSE;
			if (count < MAXLENGTH)
				++count;
		}
		else if (wspace == FALSE) {
			wspace = TRUE;
			histogram[count - 1]++;
			count = 0;
		}
	}

	for (i = 0; i < MAXLENGTH; ++i) {
		if (i < MAXLENGTH - 1)
			printf("%d  | ", i + 1);
		else
			printf("%d>|", i + 1);
		for (j = 0; j < histogram[i]; ++j)
			putchar(HISTCHAR);
		putchar('\n');
	}

	return 0;
}
