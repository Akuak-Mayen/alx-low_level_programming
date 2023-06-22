#include "main.h"

/**
 * print_number - Prints a number with appropriate formatting.
 * @num: The number to be printed.
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num >= 10 && num < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if (num >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
}

/**
 * print_times_table_row - Prints a single row of the times table.
 * @n: The number for the times table.
 * @row: The row number to print.
 */
void print_times_table_row(int n, int row)
{
	int i, result;

	for (i = 0; i <= n; i++)
	{
		result = i * row;

		if (i == 0)
			_putchar(result + '0');
		else
			print_number(result);
	}

	_putchar('\n');
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: Number of the times table.
 */
void print_times_table(int n)
{
	int i;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			print_times_table_row(n, i);
		}
	}
}

