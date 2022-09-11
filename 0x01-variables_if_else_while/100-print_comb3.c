#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int t;

	for (t = 1 ; t < 100 ; t++)
	{
		putchar((t / 10) + '0');
		putchar((t % 10) + '0');
		if (t != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
