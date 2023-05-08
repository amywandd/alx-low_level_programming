#include "main.h"
#include "string.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: parameter function
 * @text_content: parameter function
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int w;
int len = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_APPEND | O_RDWR);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
len = strlen(text_content);
w = write(fd, text_content, len);
}
if (w == -1)
return (-1);
close(fd);
return (1);
}
