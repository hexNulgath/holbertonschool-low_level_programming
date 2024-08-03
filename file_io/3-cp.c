#include "main.h"
/**
 * cp - copy a file content to other
 * @file_from: path to file to take content from
 * @file_to: path to file to paste content
 * Return: 1 on success and -1 on failure
 */
void cp(const char *file_from, const char *file_to)
{
    int fd, fd1;
    ssize_t r_res;
    char buffer[1024];

    fd = open(file_from, O_RDONLY);
    if (fd == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    fd1 = open(file_to, O_WRONLY | O_CREAT | O_EXCL);
    if (fd1 == -1)
    {
        if (errno == EEXIST)
        {
            fd1 = open(file_to, O_WRONLY | O_TRUNC);
        }
        if (fd1 == -1)
        {
            dprintf(2, "Error: Can't write to %s\n", file_to);
            close(fd);
            exit(99);
        }
    }

    while ((r_res = read(fd, buffer, sizeof(buffer))) > 0)
    {
        if (write(fd1, buffer, r_res) != r_res)
        {
            dprintf(2, "Error: Can't write to %s\n", file_to);
            close(fd);
            close(fd1);
            exit(99);
        }
    }

    if (r_res == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", file_from);
        close(fd);
        close(fd1);
        exit(98);
    }

    if (close(fd) == -1)
    {
        dprintf(2, "Error: Can't close file descriptor %d\n", fd);
        close(fd1);
        exit(100);
    }

    if (close(fd1) == -1)
    {
        dprintf(2, "Error: Can't close file descriptor %d\n", fd1);
        exit(100);
    }
}
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	cp(av[1], av[2]);

	return (0);
}
