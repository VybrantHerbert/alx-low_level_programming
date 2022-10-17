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
	
	
	printf("Size of a char: %lu.\n",(unsigned long)  sizeof(char));
	printf("Size of an int: %lu. \n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu. \n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu. \n", (unsigned long) sizeof(long long int));
 	printf("Size of a float: %lu. \n", (unsigned long) sizeof(float));	
	return (0);
}