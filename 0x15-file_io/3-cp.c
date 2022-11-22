#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

/**
 * print_err - prints the error then exits
 * @err_message: the error message
 * @str_info: a string additional information about the function
 * @int_info: additional intiger information about the function
 * @ex: the exit code for the error
 */
void print_err(char *err_message, char *str_info, int int_info, int ex)
{
	if (str_info == NULL && int_info == 0)
		dprintf(STDERR_FILENO, "%s\n", err_message);
	else if (str_info == NULL)
		dprintf(STDERR_FILENO, "%s %s\n", err_message, str_info);
	else
		dprintf(STDERR_FILENO, "%s %d\n", err_message, int_info);
	exit(ex);
}
/**
 * main - copies content of one file to other file
 * @argc: number of arguments used to call the program
 * @argv: array of argumets used
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	int my_file, new_file, c;
	size_t bytes = 1024;
	ssize_t count;
	char *stored_text = malloc(sizeof(char *) * bytes);

	if (argc != 3)
		print_err("Usage: cp file_from file_to", NULL, 0, 97);
	my_file = open(argv[1], O_RDONLY);
	if (my_file == -1)
		print_err("Error: Can't read from file", argv[1], 0, 98);
	new_file = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (new_file == -1)
		print_err("Error: Can't write to", argv[2], 0, 99);
	do {
		count = read(my_file, stored_text, bytes);
		if (count == -1)
			print_err("Error: Can't read from file", argv[1], 0, 98);
		count = write(new_file, (void *)stored_text, count);
		if (count == -1)
			print_err("Error: Can't write to", argv[2], 0, 99);
	} while ((size_t)count == bytes);
	c = close(my_file);
	if (c == -1)
		print_err("Error: Can't close fd", NULL, my_file, 100);
	c = close(new_file);
	if (c == -1)
		print_err("Error: Can't close fd", NULL, new_file, 100);
	return (0);
}
