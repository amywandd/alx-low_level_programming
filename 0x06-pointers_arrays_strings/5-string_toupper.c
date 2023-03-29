#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - converts lowercase to uppercase
 * Return: 0 (success)
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
str[i] = toupper(str[i]);
i++;
}
return (str);
}
