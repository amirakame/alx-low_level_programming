#include <string.h>

int is_palindrome(char *s)
/**
   *  checks if a string is a palindrome
    * @s: string to reverse
     *
      * Return: 1 if it is, 0 it's not
*/
{
	    int left = 0;
int right = strlen(s) - 1;

while (left < right)
{
if (s[left] != s[right])
{
return (0);
}
left++;
right--;
}
return (1);
}
