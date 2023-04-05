#include "main.h"

/**
 * puts_recursion - prints a string, followed by a new line.
 * @s: the string to be printed
 *
 * Return: void
 */
void puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
