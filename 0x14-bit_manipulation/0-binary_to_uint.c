#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: parameter function
 * Return: int or null
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int dec_val = 0;
if (b == NULL)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
else
dec_val = 2 * dec_val + (b[i] - '0');
}
return (dec_val);
}
