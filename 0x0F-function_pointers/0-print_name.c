#include "function_pointers.h"
#include <stdio.h>
/**
   * print_name - print name utilizing a pointer to a function.
    * @name: add by string
     * @f: pointer to function
      * Return: nothing
       **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
