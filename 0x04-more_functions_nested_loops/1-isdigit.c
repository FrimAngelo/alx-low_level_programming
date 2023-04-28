#include "main.h"
#include <stdio.h>
/**
*_isdigit - it takes one parameter
*@c:is the number that we check  if it is a digit
*Return: 1 if c is digit else return 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
