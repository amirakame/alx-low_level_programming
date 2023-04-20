#include "variadic_functions.h"
#include <stdarg.h>

/**
   * sum_them_all - Returns the sum of all its factors.
    * @n: The number of factors to the function.
     * @...: A variable number of factors to calculate the sum of.
      *
       * Return: If n == 0 - 0.
* Otherwise - the sum of all factors.
	 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
