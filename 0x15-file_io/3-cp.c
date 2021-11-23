#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: an array of arguments
 * Return: 0, always success
 */
int main (int argc, char *argv[])
{
	int from, to, r, w, cf, ct;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]), exit(98);

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r = read(from, buffer, BUFSIZ)) > 0)
	{
		w = write(to, buffer, r);
		if (w != r || w == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]), exit(98);
	cf = close(from);
	if (cf == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", from), exit(100);
	ct = close(to);
	if (ct == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
