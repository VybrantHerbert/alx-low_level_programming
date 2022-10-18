#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: zero for success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122 ; alphabet >= 97; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
