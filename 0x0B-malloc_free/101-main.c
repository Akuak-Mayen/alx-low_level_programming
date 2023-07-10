#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: Nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: An array of words (strings) or NULL on failure
 */
char **strtow(char *str)
{
	/* Implementation of strtow function */
	/* ... */
	return (NULL);
}

/**
 * main - Check the code for ALX School students
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}

