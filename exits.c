#include "shell.h"
/**
 * *_strncpy - copies string
 * @dest: destination
 * @src: source
 * @n: the amount of char copied
 * Return: concat string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}
/**
 * *_strncat - concate two strings
 * @dest: first string
 * @src: second string
 * @n: amount of byte
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *s = dest;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}
/**
 * *_strchr - locates chr in string
 * @s: string to be parsed
 * @c: char to look for
 * Return: (s) a pointer to the memory
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	return (NULL);
}
