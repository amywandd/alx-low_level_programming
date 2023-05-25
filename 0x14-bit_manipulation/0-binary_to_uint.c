#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: parameter function
 * Return: int or null
 */
unsigned int binary_to_uint(const char *b)
{
int i;
	unsigned int dec_val = 1;
	unsigned int total = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val *= 2;
		if (b[i] == '1')
			total += dec_val;
	}
	return (total / 2);
}
