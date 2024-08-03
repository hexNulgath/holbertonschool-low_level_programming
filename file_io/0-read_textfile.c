#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: path to file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buf;
	ssize_t count;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	count = read(fp, buf, letters);
	if (count == -1)
	{
		free(buf);
		return (0);
	}
	if (count == 0)
	{
		write(STDOUT_FILENO, buf, letters);
		free(buf);
		close(fp);
		return (letters);
	}
	 write(STDOUT_FILENO, buf, count);
	free(buf);
	close(fp);
	return (count);
}
