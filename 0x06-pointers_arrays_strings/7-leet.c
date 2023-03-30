#include "main.h"
/**
 * *leet - replaces characters with integers.
 * @str: parameter function
 * Return: 0 (success)
 */
char *leet(char *str)
{
int i;
int j;
char *s = "aAeEoOtTlL";
char *t = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (str[i] == s[j])
{
str[i] = t[j];
}
}
}
return (str);
}
