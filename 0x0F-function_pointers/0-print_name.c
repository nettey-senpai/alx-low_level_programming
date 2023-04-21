#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this prints name using pointer to function
 * @name: the string to add
 * @f: the pointer to function
 * Return: returns nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
