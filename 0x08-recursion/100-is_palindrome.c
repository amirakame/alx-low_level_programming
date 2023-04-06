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
	    int len = strlen(s);

/* base case: empty string or single-character string */
if (len <= 1)
return (1);
		/* recursive case: check first and last characters */
if (s[0] == s[len - 1])
return (is_palindrome(s + 1) && is_palindrome(s, len - 2));
else
return (0);
}

/**
   * main - tests the is_palindrome function
    *
     * Return: always 0
      */
int main(void)
{
	    int r;

r = is_palindrome("level");
		    printf("%d\n", r);
r = is_palindrome("redder");
			    printf("%d\n", r);
r = is_palindrome("test");
				    printf("%d\n", r);
r = is_palindrome("step on no pets");
					    printf("%d\n", r);
return (0);
}
