#include <string.h>

int _strlen_recursion(char *s);
/**
   * is_palindrome - checks if a string is a palindrom
    * @s: string to reverse
     *
      * Return: 1 if it is, 0 it's not
*/
int is_palindrome(char *s)
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
