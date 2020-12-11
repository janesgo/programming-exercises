/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging.
 *
 * Vertical orientation
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define HISTCHAR '*'
#define MAXLENGTH 10

int main() {
	int c, count, i, j, max, wspace;
	int histogram[MAXLENGTH];

	count = j = max = 0;
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
		if (histogram[i] > max)
			max = histogram[i];
	}

	for (i = max; i > 0; --i) {
		for (j = 0; j < MAXLENGTH; ++j) {
			if (i <= histogram[j])
				printf(" %c ", HISTCHAR);
			else
				printf("   ");
		}
		putchar('\n');
	}
	for (i = 1; i <= MAXLENGTH; ++i) {
		if (i == MAXLENGTH)
			printf(" %d>", i);
		else
			printf(" %d ", i);
	}
}
