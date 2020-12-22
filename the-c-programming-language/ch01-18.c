/*
 * Exercise 1-18. Write a program to remove trailing blanks and tabs
 * from each line of input, and to delete entirely blank lines.
 */

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void removechars(char line[], int length);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		removechars(line, len);
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

void removechars(char line[], int l) {
	int nline, in;

	in = nline = 0;
	for (--l; l >= 0; --l) {
		if (line[l] == '\n' && l > 0)
			nline = 1;
		else if (line[l] != ' ' && line[l] != '\t' && in == 0) {
			line[l + 1] = '\n';
			line[l + 2] = '\0';
			in = 1;
		}
	}
	if (!nline || !in)
		line[0] = '\0';
}
