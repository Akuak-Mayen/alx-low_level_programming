#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, then uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/* Print lowercase alphabet */
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	/* Print uppercase alphabet */
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n'); /* Print a new line */

	return (0);
}

