#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: parameter function
 * Return:0 (success)
 */
void rev_string(char *s)
{
int i;
int len = strlen(s) - 1;
while (i < len)
{
char temp;
temp = s[i];
s[i] = s[len];
s[len] = temp;
i++;
len--;
}
}
