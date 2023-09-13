#include "main.h"

/**
 * print_name- prints a name
 *
 *@name: string to print.
 *@f: this a function pointer, that recieves a string.
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
