#include "main.h"

/*
 * main - function that checks for a digit (0 through 9)
 *
 *
 * @c: the character to be cheched
 * Return: 1 if c is uppercase, 0 otherwise
 *
 */
int _isdigit(int c)
{
        return (c >= '0' && c <= '9');
}
