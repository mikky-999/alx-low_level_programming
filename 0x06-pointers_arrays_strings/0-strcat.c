#include "main.h"

/**
 * _strcat - Function concatinate 2 strings
 * @dest: First string to be passed to the function
 * @src: Second string to be passed to the function
 * Return: The char concatinated
 */
char *_strcat(char *dest, char *src)
{
	char result[];
	int i, j;

	while (dest[i] != '\0')
	{
		result[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		result[j] = src[i];
		i++;
		j++;
	}
	result[j] = '\0';
	printf("%s", result);
	return (result);
}
