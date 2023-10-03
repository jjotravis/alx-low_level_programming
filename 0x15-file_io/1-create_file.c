#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: is the name of file to create
 * @text_content: Null terminated string
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
