#include "main"
 /*
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar("%c", *s);
	_puts_recursion(++s);
}
