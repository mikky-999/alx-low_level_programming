#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: 0 Always (success)
 */
void print_alphabet(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
	{
		_putchar(w);
	}
	_putchar('\n');
}
