#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
         int intType;
    float floatType;
    double doubleType;
   long long longLongType
    char charType;
    long longType;

    // sizeof evaluates the size of a variable
    printf("Size of a Char %2d bytes\n",sizeof(charType));
    printf("Size of an int: %2d bytes\n", sizeof(intType));
    printf("Size of a long: %2d bytes\n", sizeof(longType));
    printf("Size of a long long: %2d bytes\n", sizeof(longLongType));
    printf("Size of a float: %2d byte\n",sizeof(floatType));

    return (0);
}
