#include "main.h"

int _sqrt_recursion2(int a, int b);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 1));
}
/**
 * _sqrt_recursion2 - recurses to find the natural
 * square root of a number
 * @x: number to calculate the sqaure root of
 * @y: iterator
 *
 * Return: the resulting square root
 *
 */
int _sqrt_recursion2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt_recursion2(x, y + 1));
}
