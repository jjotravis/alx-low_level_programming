#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - appends text at end of file
 * @filename: name of the file
 * @text_content: string to be added
 *
 * Return:1 on succes -1 on failure
 * -1 if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
