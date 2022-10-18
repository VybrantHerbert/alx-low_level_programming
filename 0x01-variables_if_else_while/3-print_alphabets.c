#include <stdio.h>
/**
 * main - Entry point for any C program
 *
 * Description: Print lower and upper case alphabets
 * Return: zero without error, Non zero if error
 */
int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
		putchar('a' + c);
	for (c = 0; c < 26; ++c)
		putchar('A' + c);
	putchar('\n');
	return (0);
}
