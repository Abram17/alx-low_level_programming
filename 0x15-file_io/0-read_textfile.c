#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 *
 * @filename: variable pointer
 * @letters: size letters
 *
 * Return: the actual number of letters it could read and print
 *         0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, temp, temp2;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	temp = read(file, text, letters);

	temp2 = write(STDOUT_FILENO, text, temp);

	close(file);

	return (temp2);
}
