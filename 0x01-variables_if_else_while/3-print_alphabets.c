#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints both lower and uppercase alphabets
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

