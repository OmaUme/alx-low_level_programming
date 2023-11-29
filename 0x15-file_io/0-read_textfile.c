#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print, fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t nRD, nWR;

	if (filename == NULL)
	{
	return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	return (0);
	}
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
	{
	close(fd);
	return (0);
	}
	nRD = read(fd, buff, letters);
	if (nRD == -1)
	{
	close(fd);
	free(buff);
	return (0);
	}
	nWR = write(STDOUT_FILENO, buff, nRD);
	if (nWR == -1 || nWR != nRD)
	{
	close(fd);
	free(buff);
	return (0);
	}
	close(fd);
	free(buff);
	return (nWR);
}
