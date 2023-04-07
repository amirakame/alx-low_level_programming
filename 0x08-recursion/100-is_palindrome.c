#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}

	if (len <= 1)
	{
		return (1);
	}
		return check_palindrome(s, 0, len - 1);
}

/**
 * check_palindrome - recursively checks if a string is a palindrome
 * @s: string to check
 * @start: starting index of the substring to check
 * @end: ending index of the substring to check
 *
 * Return: 1 if it is, 0 if it's not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return check_palindrome(s, start + 1, end - 1);
}
