#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks the last digit of n
 * prints out if it's positive, negative or zero
 * Return: 0 if no errors occured
 */
int main(void)
{
	int n;
	int lb;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lb = n % 10;
	if (lb > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lb);
	else if (lb == 0)
		printf("Last digit of %d is %d and is 0\n", n, lb);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lb);
	return (0);
}
