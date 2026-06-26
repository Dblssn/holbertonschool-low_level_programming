#include "main.h"
/**
 * main - Copies the contents of one file to another.
 * @c: Number of command-line arguments.
 * @v: Array of command-line arguments.
 * Return: 0 on success.
 */
int main(int c, char **v)
{
	int f1, f2;
	ssize_t r, w;
	char b[1024];

	if (c != 3)
		return (dprintf(1, "Usage: cp file_from file_to\n"), 97);
	f1 = open(v[1], O_RDONLY);
	if (f1 == -1)
		return (dprintf(1, "Error: Can't read from file %s\n", v[1]), 98);
	f2 = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
		close(f1);
		return (dprintf(1, "Error: Can't write to %s\n", v[2]), 99);
	}
	r = read(f1, b, 1024);
	while (r > 0)
	{
		w = write(f2, b, r);
		if (w != r)
		{
			close(f1);
			close(f2);
			return (dprintf(1, "Error: Can't write to %s\n", v[2]), 99);
		}
		r = read(f1, b, 1024);
	}
	if (r == -1)
	{
		close(f1);
		close(f2);
		return (dprintf(1, "Error: Can't read from file %s\n", v[1]), 98);
	}
	if (close(f1) == -1)
		return (dprintf(1, "Error: Can't close fd %d\n", f1), 100);

	if (close(f2) == -1)
		return (dprintf(1, "Error: Can't close fd %d\n", f2), 100);

	return (0);
}
