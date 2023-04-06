#include "main.h"

int is_palindrome_recursion(char *s, int start, int end);

/**
   * is_palindrome - checks if a string is a palindrome
    * @s: string to check
     *
      * Return: 1 if it is, 0 it's not
       */
int is_palindrome(char *s)
{
	    int len = 0;
int i;

		    /* get length of string */
while (s[len] != '\0')
len++;

/* compare first half of string to second half */
for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - i - 1])
return (0);
}

return (1);
}

/**
   * is_palindrome_recursion - checks if a string is a palindrome, recursively
    * @s: string to check
     * @start: starting index of string
      * @end: ending index of string
       *
* Return: 1 if it is, 0 it's not
	 */
int is_palindrome_recursion(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_recursion(s, start + 1, end - 1));
}
