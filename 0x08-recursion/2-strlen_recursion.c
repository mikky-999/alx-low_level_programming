#include "main.h"

/** _strlen_recursion - The function prints out a string in reverse
 * *s: string variable
 * Return: *s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return 0;
	else
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return 0;
}
