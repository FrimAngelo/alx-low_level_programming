#include "main.h"
/**
 * -abs - return 1 if n is lowercase, 0 otherwise
 *  @n: integer to be tested
 *  Return: abs(n)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
/**
 * print_last_digit - print the last digit of a number
 * @n: integer who last digit is to be printed
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
