#include "main.h"

/**
 * rev_string - This fuction print a string reverser
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int x;

	while (s[counter] != '\0')
	counter++;
	for (x = counter; x < 0; x++)
	{
		counter--;
		rev = s[x];
		s[x] = s[counter];
		s[counter] = rev;
	}
}
