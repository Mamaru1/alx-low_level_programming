#include "main.h"
/**
 * length_of_palindrome - return the length of the given string
 * @x: string
 * @l: integer to count length
 *
 * Return: On success 1.
 *
 *
 *
 *
 */
int length_of_palindrome(char *x, int l)
{
	if (*x == 0)
		return (l - 1);
	return (length_of_palindrome(x + 1, l + 1));
}
/**
 * comp_palindrome - compares string vs string reverse
 * @x: the value string
 * @l: length of the string
 * Return: On success 1.
 */

int comp_palindrome(char *x, int l)
{
	if (*x != *(x + l))
		return (0);
	else if (*x == 0)
		return (1);
	return (comp_palindrome(x + 1, l - 2));
}
/**
 * is_palindrome - is astring a palindrome or not
 * @s: string to evaluate
 *
 * Return: On success 1.
 *
 */

int is_palindrome(char *s)
{
	int l;

	l = length_of_palindrome(s, 0);
	return (comp_palindrome(s, l));
}
