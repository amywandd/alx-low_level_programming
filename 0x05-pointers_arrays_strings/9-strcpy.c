#include "main.h"
/**
 * *_strcpy - copies strings
 * @dest: parameter function
 * @src: parameter function
 * Return: 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
}