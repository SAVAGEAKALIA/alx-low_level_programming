#include "main.h"
/**
 * append_text_to_file - Appends text toend of a file.
 * @filename: A pointer tothe file.
 * @text_content: The string to add to file
 *
 * Return: If function fails or filename is NULL - -1.
 *         If file does not exist or user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int writeonly, writefile, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	writeonly = open(filename, O_WRONLY | O_APPEND);
	writefile = write(writeonly, text_content, size);

	if (writeonly == -1 || writefile == -1)
		return (-1);

	close(writeonly);

	return (1);
}
