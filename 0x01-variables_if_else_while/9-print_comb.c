#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int t;

	for (t - '0' ; t <= '9' ; t++)
	{
		putchar(t);
		if (t != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
