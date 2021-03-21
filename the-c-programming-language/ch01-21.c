#include <stdio.h>
#define TABSIZE 8

int main()
{
	int c, nb, nc;
	nb = nc = 0;

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == ' ') {
			if (nc == TABSIZE) {
				putchar('\t');
				nb = 0;
			}
			else
				++nb;
		}
		else {
			while (nb > 0) {
				putchar(' ');
				--nb;
			}
			putchar(c);
		}
		if (nc == TABSIZE || c == '\n')
			nc = 0;
	}
	return 0;
}
