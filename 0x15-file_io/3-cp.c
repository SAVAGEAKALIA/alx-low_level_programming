#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int file);

/**
 * create_buffer - Allocates 1024 buffer.
 * @file: The name of file buffer is storing chars for.
 *
 * Return: A pointer newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Close descriptors.
 * @file: file descriptor that is closed.
 */

void close_file(int file)
{
	int clo;

	clo = close(file);

	if (clo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments or arguments passed.
 *
 * Return: 0 on success.
 *
 * Description: If argument count is incorrect - exit code 97.
 * If file-from does not exist or cannot be read - exit code 98.
 * If file-to cannot be created or written to - exit code 99.
 * If file-to or file-from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, readf, writef;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readf = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || readf == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		writef = write(to, buff, readf);
		if (to == -1 || writef == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		readf = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (readf > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
