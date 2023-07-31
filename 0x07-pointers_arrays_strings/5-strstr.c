#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	do {
		char *temp;

		temp = haystack;
		do {
			haystack++, needle++;
		} while (*needle == *haystack);
		if (*needle == '\0')
			return (temp);
		haystack++;
	} while (*haystack);
	return (0);
}
