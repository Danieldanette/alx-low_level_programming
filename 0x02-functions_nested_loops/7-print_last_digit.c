#include "main.h"

/**
 * print_last_digit - print the last digits
 * @n: the int to check the last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 10)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
