#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a : integers to be swapped.
 * @b : integers to be swapped.
 * Return:void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
