#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints aiphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')

	if ((ch != 'q' && ch != 'e') && ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
