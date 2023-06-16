#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *username = argv[1];
	char *key;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	if (strcmp(username, "julien") == 0)
		key = "javascript";
	else if (strcmp(username, "guillaume") == 0)
		key = "lowlevelprog";
	else
	{
		printf("No key found for %s\n", username);
		return (1);
	}

	printf("%s\n", key);
	return (0);
}
