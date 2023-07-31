#include "main.h"
#include <stdio.h>
/**
 * _strchr - Function that locates a character in a string
 * @s: This is the input string
 * @c: This is the character
 * Return: Return to the character found, if not return a NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	do {
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
		} while (1);
}
