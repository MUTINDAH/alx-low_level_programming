#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int l;
l = n % 10;
if (n > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, l);
}
else if (n == 0)
{
printf("Last digit of %i is 0 and is 0\n", n);
}
else if (n < 6)
{
printf("Last digit of %i is %i less than 6 and not 0 and is less than 6 and not 0\n", n, l);
}
return (0);
}
