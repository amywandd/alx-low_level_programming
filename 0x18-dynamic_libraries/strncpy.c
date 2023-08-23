#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string
 * @dest: parameter function
 * @src: parameter function
 * @n: parameter function
 * Return: 0(success)
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
