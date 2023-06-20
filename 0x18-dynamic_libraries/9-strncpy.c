#include "main.h"
#include <string.h>
/**
 * *_strncat - concentrates two strings
 * @dest: parameter function
 * @src: parameter function
 * @n: parameter function
 * Return: 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
