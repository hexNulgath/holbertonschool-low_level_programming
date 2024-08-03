#include "main.h"
/**
 * create_file - creates a file
 * @filename: path to file
 * @text_content: content for the new file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_err

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY);
			if (fd == -1)
				return (-1);
		}
		else 
			return (-1);
	}
	if(text_content != NULL)
	{
		write_err = write(fd, text_content, strlen(text_content));
		if (write_err == -1)
			close(fd)
			return (-1);
	}
	close(fd);
	return (1);
}
