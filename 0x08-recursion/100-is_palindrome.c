#include "main.h"
/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;
	return (palind(s, --length));
}
/**
 * get_length - gets length of a string
 * @s: string
 * Return: return length of a string
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}
/**
 * palind - recursive check of plaindrome
 * @s: string
 * @l: length of a string
 * Return: 1 if plindrome, 0 if not
 */
int palind(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (palind(++s, l - 2));
	}
	else
		return (0);
}
