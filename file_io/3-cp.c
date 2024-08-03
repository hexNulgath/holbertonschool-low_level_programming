#include "main.h"
/**
 * _open - opens files for copy
 * @file_from: path to file to take content from
 * @file_to: path to file to paste content
 * Return: an array of int
 */
int *_open(const char *file_from, const char *file_to)
{
	static int fd[2];

	fd[0] = open(file_from, O_RDONLY);
	if (fd[0] == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd[1] = open(file_to, O_WRONLY | O_CREAT | O_EXCL, 0664);
	if (fd[1] == -1)
	{
		if (errno == EEXIST)
		{
			fd[1] = open(file_to, O_WRONLY | O_TRUNC);
		}
		if (fd[1] == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close(fd[0]);
			exit(99);
		}
	}

	return (fd);
}
/**
 * cp - copy a file content to other
 * @file_from: path to file to take content from
 * @file_to: path to file to paste content
 * Return: 1 on success and -1 on failure
 */
void cp(const char *file_from, const char *file_to)
{
	int *fd;
	ssize_t r_res;
	char buffer[1024];

	fd = _open(file_from, file_to);

	while ((r_res = read(fd[0], buffer, sizeof(buffer))) > 0)
	{
		if (write(fd[1], buffer, r_res) != r_res)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close(fd[0]);
			close(fd[1]);
			exit(99);
		}
	}
	if (r_res == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd[0]);
		close(fd[1]);
		exit(98);
	}

	if (close(fd[0]) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor %d\n", fd[0]);
		close(fd[1]);
		exit(100);
	}

	if (close(fd[1]) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor %d\n", fd[1]);
		exit(100);
	}
}
/**
 * main - check the code
 * @ac: argument count
 * @av: argument value
 * Return: Always 0.
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);

	return (0);
}
