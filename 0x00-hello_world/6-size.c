#include <stdio.h>

/**
 * main - print strings in put function
 *
 * Description: using the main function
 * this program prints the size of data types
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lii;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li)):
	printf("Size of a long long int: %d byte(s)\n", sizeof(lii));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
