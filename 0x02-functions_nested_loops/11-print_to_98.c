#include <stdio.h>
/**
 * print_to_98 - prints every number from n to 98
 * @n:starting numbers
 */
void prints_to_98(int n)
{
int i

if (n <= 98)
	{
		_for ((i = n); i < 98; i++);
		{
			printf("%i,", i);
		}
	}
	printf("98\n");
}
