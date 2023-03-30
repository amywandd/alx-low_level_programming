#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * *cap_string - capitalises letters in a string
 * @str: function parameter
 * Return: 0(success)
 */
char *cap_string(char *str)
{
int i = 0;
int a = 1;
while (str[i])
{
if (a && isalpha(str[i]))
{
str[i] = toupper(str[i]);
a = 0;
}
else if (strchr(" \t\n,;.!?\"(){}", str[i]))
{
a = 1;
}
else
{
}
i++;
}
return (str);
}
