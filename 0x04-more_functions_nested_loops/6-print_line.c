#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times the char should be printed
 * Return: void
 */
void print_line(int n)
{
	int j = 0;

	if (n > 0)
	{
		while (j < n)
		{
			_putchar ('_');
			j++;
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
