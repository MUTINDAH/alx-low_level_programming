#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: This program will assign a random number
 * to the variable n each time it is executed
 * Return: 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last;
	last = n % 10;
	if (n > 5)
        {
	printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (n == 0)
	{
	printf("Last digit of %i is 0 and is 0\n", n);
	}
	else if (n < 6 && n != 0)
	{
	printf("Last digit of %i is %i less than 6 and not 0 and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
