#include "main.h"

int actual_prime(int n, int i);

/**
   * is_prime_number - checks if a number is prime
    * @n: the number to check
     *
      * Return: 1 if n is prime, 0 otherwise
       */
int is_prime_number(int n)
{
	    int i;

if (n <= 1) /* 0 and 1 are not prime */
return (0);

for (i = 2; i * i <= n; i++)
{
if (n % i == 0)
return (0);
}
return (1);
}
