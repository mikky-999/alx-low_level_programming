#include "main.h"
/**
 * _strncat - concatenates two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int jeez = 0, dest_len = 0;

	while (dest[jeez++])
		dest_len++;

	for (jeez = 0; src[jeez] && jeez < n; jeez++)
		dest[dest_len++] = src[jeez];
	return (dest);
}
