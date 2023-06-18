#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';

	/* Print lowercase alphabet */
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	putchar('\n'); /* Print a new line */

	return (0);
}

