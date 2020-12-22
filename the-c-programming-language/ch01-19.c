/*
 * Exercise 1-19. Write a function reverse(s) that reverses the character
 * string s. Use it to write a program that reverses its input a line at
 * a time.
 */

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char line[]);

int main() {
	int len;
	char line[MAXLINE];

	if ((len = getline(line, MAXLINE)) > 0) {
		reverse(line);
		printf("%s", line);
	}
	return 0;
}

int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char l[]) {
	int i, j, t;

	i = 0;
	while (l[i] != '\n' && l[i] != '\0')
		++i;
	--i;
	for (j = 0; j < i; ++j, --i) {
		t = l[j];
		l[j] = l[i];
		l[i] = t;
	}
}
