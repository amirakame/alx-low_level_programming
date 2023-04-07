#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
   * is_palindrome - checks if a string is a palindrome
    * @s: the string to check
     *
      * Return: 1 if the string is a palindrome, 0 otherwise
       */
int is_palindrome(char *s)
{
	    int len = strlen(s);
if (len <= 1)
return (1);
else if (*s != *(s + len - 1))
return (0);
else
return (is_palindrome(s + 1) && is_palindrome(s, len - 2));
}
