#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 *
 * Return: memory area replaced
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}

	return (dest);
}
