#include <stdio.h>

int check_prime(int n, int i);

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}

int check_prime(int n, int i)
{
if (n % i == 0 && i != n)
return (0);
else if (i == n)
return (1);
else
return (check_prime(n, i + 1));
}
