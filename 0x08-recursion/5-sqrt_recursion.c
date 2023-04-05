#include "main.h"

/**
   * _sqrt_recursion - returns the natural square root of a number
    * @n: the number to find the square root of
     *
* Return: the natural square root of the number, or -1 if no natural square root exists
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
int low = 1;
int high = n / 2;
int mid, res;
while (low <= high)
{
mid = (low + high) / 2;
res = mid *mid;

if (res == n)
{
return (mid);
}
else if (res < n)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}
return (-1);
}
}
