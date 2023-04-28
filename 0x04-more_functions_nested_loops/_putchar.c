#include <unistd.h>
/**
*@C: The character to print
*
*Return: on success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
{
return (write(1, &c,  1));
}
