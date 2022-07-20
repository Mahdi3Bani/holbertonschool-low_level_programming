#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, s, t;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);

	return (1);
}
