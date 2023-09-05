#include "main.h"
#include <fcntl.h>
/**
  *read_textfile - read and writ text file
  *@filename: pointer to file
  *@letters: number of letters to print
  *Return: number of letters printed in bytes
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letter_read;
	ssize_t letter_written;
	char *buffer;
	ssize_t file;

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);	
	letter_read = read(file, buffer, letters);
	letter_written = write(STDOUT_FILENO, buffer, letter_read);


	free(buffer);
	close(file);
	return (letter_written);
}
