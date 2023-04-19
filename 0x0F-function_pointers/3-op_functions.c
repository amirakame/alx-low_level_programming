#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
   * op_add - Returns to two numbers.
    * @a:  Number's one.
     * @b: The second number.
      *
       * Return: The sum of a and b.
*/
int op_add(int a, int b)
{
		return (a + b);
}
/**
   * op_sub - Returns the distinction      of two numbers.
    * @a: Number's one.
     * @b: The second number.
      *
       * Return: The distinction of a and b.
*/
int op_sub(int a, int b)
{
		return (a - b);
}
/**
   * op_mul - Returns the product of two numbers.
    * @a: The first number.
     * @b: The second number.
      *
       * Return: The product of a and b.
*/
int op_mul(int a, int b)
{
		return (a * b);
}
/**
   * op_div - Returns the partition of two numbers.
    * @a: The first number.
     * @b: The second number.
      *
       * Return: The ratio of a and b.
*/
int op_div(int a, int b)
{
		return (a / b);
}
/**
   * op_mod - Returns the remainder of the partition of two numbers.
    * @a: The first number.
     * @b: The second number.
      *
       * Return: The remainder of the partition of a by b.
*/
int op_mod(int a, int b)
{
		return (a % b);
}
