#include "main.h"

/**
 * string_length - function that returns the length of a string
 *
 * @s: a string
 *
 * Return: the length of a string
 */
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + string_length(s + 1));
	}
}
/**
 * palindrome_check - function that check if a string is a palindrome
 *
 * @s: a string
 * @len: string length
 * @i: an iterator
 *
 * Return: 1 if is a palindrome, 0 if not
 */
int palindrome_check(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - 1 - i])
	{
		return (palindrome_check(s, len, i + 1));
	}
	return (0);
}
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *
 * @s: a string
 *
 * Return: 1 if is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = string_length(s);

	if (*s == '\0')
	{
		return (1);
	}
	return (palindrome_check(s, len, i));
}
