#include "main.h"

/**
 * _strlen - function that swaps the values of two integers
 * @s : character s
 * Return:void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
