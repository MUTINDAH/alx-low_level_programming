#include "main.h"
/**
 *print_sign - Print the sign of a number
 *@n: type int integer, can be negative or positive
 *Description: prints +ve, 0, or -ve
 *Return: 1 if +ve, 0 if 0, -1 if -ve
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
