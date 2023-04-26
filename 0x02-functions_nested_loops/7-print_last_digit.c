#include "main.h"
/**
 * -abs - return 1 if n is lowercase, 0 otherwise
 *  @n: integer to be tested
 *  Return: abs(n)
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last =  last * -1;
	}

	_putchar(last + '0');

	return (last);
}
