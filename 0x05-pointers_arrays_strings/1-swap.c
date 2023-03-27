#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: parameter function
 * @b: parameter function
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
