#include "function_pointers.h"
/**
 * print_name - functions that prints a name
 * @name: function parameter
 * @f: function parameter
 * Return - (0) success
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
