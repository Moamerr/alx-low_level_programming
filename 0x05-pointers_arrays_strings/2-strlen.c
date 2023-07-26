#include "main.h"
/**
 * _strlen - gives length of a string
 * @s: pointer to character
 * Return: Length of string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; ++x)
		;

	return (x);
}
