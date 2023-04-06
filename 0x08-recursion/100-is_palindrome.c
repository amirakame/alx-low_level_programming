#include "main.h"
#include <stdio.h>

/**
   * is_palindrome - checks if a string is a palindrome
    * @s: the string to check
     *
      * Return: 1 if s is a palindrome, 0 otherwise
       */
int is_palindrome(char *s)
{
	    int length = 0;
int start, end;

while (s[length] != '\0')
length++;

start = 0;
			    end = length - 1;

while (end > start)
{
if (s[start] != s[end])
return (0);

start++;
end--;
}

return (1);
}
