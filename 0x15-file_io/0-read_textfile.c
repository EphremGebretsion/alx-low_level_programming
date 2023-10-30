#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * shrink - shrinks the size of string to be efficient
 * @str: the string to be srinked
 * @size: the new size of str
 * Return: returns the new string address
 */

char *shrink(char *str, ssize_t size)
{
	char *new_str = malloc(sizeof(char *) * size);
	int i = 0;

	for (; i < size; i++)
	{
		new_str[i] = str[i];
	}
	free(str);
	return (new_str);
}
/**
 * read_textfile - reads test from a gved file
 * @filename: the name the file that contains the text
 * @letters: the number of leters nedded to be printed
 *
 * Return: return the number of letters printed of 0 if error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file;
	ssize_t size, writen;
	char *stored_text;

	if (filename == NULL)
		return (0);
	my_file = open(filename, O_RDONLY);
	if (my_file == -1)
		return (0);

	stored_text = malloc(sizeof(char *) * letters);
	size = read(my_file, stored_text, letters);

	if (size == -1)
		return (0);

	if (size < (ssize_t)letters)
		stored_text = shrink(stored_text, size);

	writen = write(STDOUT_FILENO, stored_text, size);
	if (writen == -1)
		return (0);

	close(my_file);

	return (writen);
}
