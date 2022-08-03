#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name : name param to print
 * @f : fun pointer
 *
 * return : void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
