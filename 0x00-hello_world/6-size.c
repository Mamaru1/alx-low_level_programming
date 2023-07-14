#include <stdio.h>
/*
 * main - print the size of various typesa based on
 * Description: print datatype
 * the computer it is compiled and run on..
 *
 * Return: Always 0
 */
int main(void)
{
	int intType;
	long int longType;
	long long int longLType;
	char charType;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longType));
	printf("Size of a long long int: %lu byte(s)\n",
			(unsigned long)sizeof(longLType));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
