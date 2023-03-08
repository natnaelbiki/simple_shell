#include "shell.h"

/**
 * _erratoi - convert a string to int
 * @s: string to be converted
 * Return: converted number
 */
int _erratoi(char *s)
{
	int i = 0;
	unsigned long int result = 0;

	if (*s == '+')
		s++;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
			if (result > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (result);
}
/**
 * print_error - prints an error message
 * @info: parameter
 * @str: string
 * Return: int
 */
void print_error(info_t *info, char *estr)
{
	_eputs(info->fnmae);
	_eputs(": ");
	print_d
