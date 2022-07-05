#include "main.h"
/**
 * print_alphabet - displays lowercase alpha
 *
 * return :0
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
