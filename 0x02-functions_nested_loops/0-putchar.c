#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

