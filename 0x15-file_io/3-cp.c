#include "main.h"
#define BUFFER_SIZE 1024
int main (int argc, char *argv[])
{
int fd;
int fd2;
int r;
int w;
const char *file_from;
const char *file_to;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
exit (97);
dprintf (2, "Usage: cp file_from file_to\n");
}
file_from = argv[1];
file_to = argv[2];
fd = open(file_from, O_RDONLY);
r = read(fd, buffer, BUFFER_SIZE);
if (fd == -1 || r == -1)
{
exit (98);
dprintf (2, "Error: Can't read from file NAME_OF_THE_FILE\n");
}
fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
w = write(fd2, buffer, r);
if (fd2 == -1 || w == -1)
{
exit (99);
dprintf (2, "Error: Can't write to NAME_OF_THE_FILE\n");
}
close(fd);
close(fd2);
if (close(fd) == -1 || close(fd2) == -1)
{
exit (100);
dprintf (2, "Error: Can't close fd %d%d\n", fd, fd2);
}
return (0);
}
