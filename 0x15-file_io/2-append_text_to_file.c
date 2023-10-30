#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - adds a new line to an existing file
 * @filename: the name of the file or the path
 * @text_content: the content of text to be added
 * Return: returns 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t size;
	int my_file;

	if (filename == NULL)
		return (-1);
	my_file = open(filename, O_APPEND | O_WRONLY);

	if (my_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		size = write(my_file, text_content, (size_t)strlen(text_content));
		if (size == -1)
			return (-1);
	}

	return (1);
}
