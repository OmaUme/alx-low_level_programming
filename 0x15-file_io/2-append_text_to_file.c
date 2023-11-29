#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file
* @text_content: NULL-terminated string to append
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int bytes_written;

if (filename == NULL || text_content == NULL)
{
return (-1); /* Return -1 if filename or text_content is NULL */
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
if (errno == ENOENT)
{
return (-1); /* Return -1 if file does not exist */
}
else
{
return (-1); /* Return -1 for permission or other errors */
}
}
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1); /* Return -1 if write fails */
}
close(fd);
return (1);
}
