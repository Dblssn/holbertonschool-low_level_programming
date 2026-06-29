#include "main.h"
/**
 * close_fd - Closes a file descriptor.
 * @fd: File descriptor to close.
 * Return: Nothing.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * check_args - Checks the number of arguments.
 * @argc: Number of arguments.
 * Return: Nothing.
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * copy_file - Copies data from one file to another.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 * @from: Source file name.
 * @to: Destination file name.
 * Return: Nothing.
 */
void copy_file(int fd_from, int fd_to, char *from, char *to)
{
	char buf[1024];
	ssize_t r, w;

	while ((r = read(fd_from, buf, 1024)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", from);
		exit(98);
	}
}
/**
 * main - Copies the contents of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;

	check_args(argc);

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		close_fd(fd_from);
		exit(99);
	}
	copy_file(fd_from, fd_to, argv[1], argv[2]);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
