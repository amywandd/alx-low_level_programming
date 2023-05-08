#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: parameter function
 * @letters: parameter function
 * Return: 0 or filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t t;
ssize_t r;
char *buf;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
if (filename == NULL)
return (0);
buf = malloc(sizeof(char) * letters);
r = read(fd, buf, letters);
t = write(STDOUT_FILENO, buf, r);
free(buf);
close(fd);
return (t);
}
