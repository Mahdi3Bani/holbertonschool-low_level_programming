#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standab output
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return: c
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, c;
	char *T = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		return (0);
	}
	b = read(a, T, letters);
	if (b == -1)
	{
		return (0);
	}
	c = write(STDOUT_FILENO, T, b);
	if (c == -1)
	{
		return (0);
	}
	close(a);
	free(T);
	return (c);
}
