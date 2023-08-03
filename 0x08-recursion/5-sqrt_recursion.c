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
 * sqrt - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 *
 */
int _sqrt_recursion2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt_recursion2(a, b + 1));
}
