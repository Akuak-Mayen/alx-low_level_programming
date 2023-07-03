#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory where data is copied
 * @src: memory to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

