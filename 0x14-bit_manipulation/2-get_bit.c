#include "main.h"
/**
 * get_bit - returns the value of bit at a given index
 * @n: parameter function
 * @index: parameter function
 * Return: bit aat given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
