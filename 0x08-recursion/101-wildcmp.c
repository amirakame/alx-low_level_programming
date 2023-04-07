#include "main.h"

/**
   * wildcmp - compares two strings, considering * as a wildcard
    * @s1: the first string
     * @s2: the second string, which may contain *
      *
       * Return: 1 if the strings can be considered identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*s1 == '\0' && *(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0' || wildcmp(s1, s2 + 1))
return (wildcmp(s1 + 1, s2));
}
else if (*s1 == '\0' || *s1 != *s2)
return (0);
else if (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
