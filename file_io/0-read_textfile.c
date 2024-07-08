#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n;
char *buf;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);

n = read(fd, buf, letters);
if (n == -1)
{
free(buf);
return (0);
}
n = write(STDOUT_FILENO, buf, n);
if (n == -1)
{
free(buf);
return (0);
}

free(buf);
close(fd);
return (n);
}
