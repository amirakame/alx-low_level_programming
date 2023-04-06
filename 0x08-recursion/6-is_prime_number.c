#include "main.h"

/**
   * is_prime - Check if number is prime
    * @n: Number to check
     * @i: Counter
      *
       * Return: 1 if prime, 0 if not
*/
int is_prime(int n, int i)
{
if (n <= 1)
return (0);
if (i == n)
return (1);
if (n % i == 0)
return (0);
return (is_prime(n, i + 1));
}

/**
   * is_prime_number - Check if number is prime
    * @n: Number to check
     *
      * Return: 1 if prime, 0 if not
       */
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
