#include "main.h"
#include <string.h>
/**
 * *_strpbrk - locates first occurence of a byte
 * @s: function parameter
 * @accept: function parameter
 * return: s or null
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
