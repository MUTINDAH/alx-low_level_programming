#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
char ch;
for (ch='a'; ch <='z';ch++)
{
putchar(ch);
}
for (ch='A'; ch <='Z';ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
