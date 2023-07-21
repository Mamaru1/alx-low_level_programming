#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int l, sq;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			_putchar('#');
			for (sq = 2; sq <= size; sq++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
