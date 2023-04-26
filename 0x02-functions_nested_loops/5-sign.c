#include "main.h"
/**
 * print_sign - returns 1 if n is +, - if n  <0 0 otherwise
 * @n: integer to be tested
 * Return: 1, -1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
	return (0);
	}
}
