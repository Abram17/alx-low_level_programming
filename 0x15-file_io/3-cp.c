#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: num argument
 * @argv: string argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int src, dest;
int x = 1024, y = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp src dest\n"), exit(97);
src = open(argv[1], O_RDONLY);
if (src == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (dest == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(src), exit(99);
}
while (x == 1024)
{
	x = read(src, buf, 1024);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = write(dest, buf, x);
	if (y < x)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(src) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);

if (close(dest) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);

return (0);
}
