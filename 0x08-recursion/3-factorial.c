#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: lower than 0 = -1 and factorial 0 = 1
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));


}
