#include <stdio.h>
/**
 * main - Entey point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * printf - outputs some strings to standard output
	 * sizeof_function - returns the sizes of a datatype
	 */
	
	
	printf("Size of a char: %lu byte(s)\n", 
	sizeof(char));
	printf("Size of an int: %lu byte(s)\n", 
	sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", 
	sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n",
	sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", 
	sizeof(float));
	return (0);
}
