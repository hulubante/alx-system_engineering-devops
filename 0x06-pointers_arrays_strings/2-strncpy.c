#include "main.h"

/**
 * _strncpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 * @n: times to interate
 * Return: the parameter dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
