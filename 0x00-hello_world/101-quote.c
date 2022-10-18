#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 required for this project because of erro
 */
int main(void)
{
	/**
	 * write function - will output error to the standard output
	 *
	 */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

