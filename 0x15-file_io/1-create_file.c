#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file and inserts a text inside it
 * @filename: is the name of the file
 * @text_content: the content to be added to the file
 * Return: return 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t size;
	int my_file;
	unsigned int count;

	if (filename == NULL)
		return (-1);

	my_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (my_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		count = strlen(text_content);
		size = write(my_file, text_content, count);
		if (size == -1)
			return (-1);
	}
	close(my_file);
	return (1);
}
