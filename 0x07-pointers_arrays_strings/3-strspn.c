#include "main.h"
#include <string.h>
/**
 * int _strspn - gets the length of a prefix substring
 * @s: parameter function
 * @accept: parameteer function
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
