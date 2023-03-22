#include <stdio.h>

/**
 * main - prints firest 50 fibonacci nmbers, starting with 1 and
 * separated by a times followed by a space
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49(
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
