#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: the name of the file to be read
 *
 * @letters: the number of letters that would be read and printed
 *
 * @Return: the actual number of letters that
 * can be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int file_d;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}

	lenr = read(file_d, buffer, letters);
	close(file_d);

	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);

	if (lenr != lenw)

	return (lenw);
}
