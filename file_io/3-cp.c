#include "main.h"
/**
 * main - copies a file into another file
 * @c: argument count
 * @v: argument vector
 *
 * Return: 0 on success, or exit codes on failure
 */
int main(int c, char **v)
{
	int f1, f2, c1, c2;
	char b[1024];

	if (c != 3)
		return (dprintf(1, "Usage: cp file_from file_to\n"), 97);

	f1 = open(v[1], O_RDONLY);
	if (f1 == -1)
		return (dprintf(1, "Error: Can't read from file %s\n", v[1]), 98);

	f2 = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
		return (dprintf(1, "Error: Can't write to %s\n", v[2]), 99);

	c1 = read(f1, b, 1024);
	while (c1 > 0)
	{
		c2 = write(f2, b, c1);
		if (c2 != c1)
			return (dprintf(1, "Error: Can't write to %s\n", v[2]),
				close(f1), close(f2), 99);

		c1 = read(f1, b, 1024);
	}

	if (c1 == -1)
		return (dprintf(1, "Error: Can't read from file %s\n", v[1]),
			close(f1), close(f2), 98);

	if (close(f1) == -1)
		return (dprintf(1, "Error: Can't close fd %d\n", f1), 100);

	if (close(f2) == -1)
		return (dprintf(1, "Error: Can't close fd %d\n", f2), 100);

	return (0);
}
