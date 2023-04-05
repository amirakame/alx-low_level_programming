#include "main.h"

/**
   * _sqrt_check - checks for the square root of a number
    * @n: the number to find the square root of
     * @i: the integer to check as a possible root
      *
* Return: the resulting square root
*/
int _sqrt_check(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (_sqrt_check(n, i + 1));
}
}

/**
   * _sqrt_recursion - returns the natural square root of a number
    * @n: the number to find the square root of
     *
* Return: the resulting square root
       */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_check(n, 1));
}}
