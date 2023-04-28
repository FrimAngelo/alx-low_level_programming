#include "main.h"
/**
* more_numbers - it takes no arguments
*it prints 10 times the numbers, from 0nto 14
*
*Return: return void
*/
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar(y / 10 + 48);
			}
			_putchar(y % 10 + 48);
		}
		_putchar('\n');
	}
}
