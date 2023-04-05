#include "main.h"
/**
  * puts_recursion - prints a string. followed by anew line.
  * @: string
  * Return: no return.
  */
void_puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
