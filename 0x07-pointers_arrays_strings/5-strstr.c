#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located substring,
 *         or a null pointer if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

