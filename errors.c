#include "shell.h"
/**
 * _eputs - prints an input string
 * @str: string
 * Return: void
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}
/**
 * _eputchar - writes the character c
 * @c: the char
 * Return: 1 on success
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, 1);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
/**
 * _putfd - write char c
 * @c: the char
 * @fd: file descriptor
 * Return: 1
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
/**
 * _putsfd - print an input string
 * @str: input string
 * @fd: file descriptor
 * Return: number of char
 */
int _putsfd(char *str, int fd)
{
	int i = 0;
	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
