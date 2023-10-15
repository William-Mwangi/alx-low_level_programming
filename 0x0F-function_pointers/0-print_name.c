#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - printing the name of the function
 * @name: string
 * @f: function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
