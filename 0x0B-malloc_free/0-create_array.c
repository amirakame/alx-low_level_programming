#include "main.h"
#include <stdlib.h>

/**
   * create_array - creates an array of chars,
    * and initializes it with a specific char.
     * @size: the size of the array to be created
      * @c: the character to initialize the array with
       *
        * Return: On success - pointer to the array created.
	 *         On failure - NULL.
	  */

char *create_array(unsigned int size, char c)
{
		char *arr = malloc(sizeof(char) * size);
			unsigned int i;

if (size == 0 || arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
								arr[i] = c;

return (arr);
}
