#include<stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
int x;
x = 0;
while(x < 10)
{
putchar(x + '0');
x++;
}
putchar ('\n');
return (0);
}
