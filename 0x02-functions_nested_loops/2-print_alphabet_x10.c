#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: The alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
char c;
int cnt;
for (cnt = 0; cnt < 10; cnt++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
