#include "function_pointers.h"

/**
 * print_name - function thats print name
 * @name: name will be printed
 * @f: function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
