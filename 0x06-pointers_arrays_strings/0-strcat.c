#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dlen , slen;
	
	dlen = 0;
	slen = 0;

	while (dest[dlen] != '\0')
		dlen++;

	while (src[slen] != '\0')
	{
		dest[dlen] = src[slen];
		dlen++;
		slen++;
	}

	dest[dlen] = '\0';

	return (dest);

}
