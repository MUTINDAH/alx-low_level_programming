#include "main.h"
/**
 * *_strcat - prints reversed string, followed by a new line
 * @dest: pointer to the string to "+"
 * @src: pointer to the string to "+"
 * Return: void
*/
char *_strcat(char *dest, char *src)
{
	char *rdest = dest;
	while (*dest)
		dest++;
	while (*dest++ = *src++)
		;
	return rdest;
}
