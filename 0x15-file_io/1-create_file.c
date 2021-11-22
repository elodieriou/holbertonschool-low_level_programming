#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: a pointer to the filename
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;
	char *buffer = text_content;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
	}

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(o, buffer, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return(1);
}
