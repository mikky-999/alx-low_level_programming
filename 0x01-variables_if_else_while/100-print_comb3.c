#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b;
	
	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if ( a != b && b > a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
