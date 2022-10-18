#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for program that prints
 * all alphabets in lowercase except for letters q and e
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
