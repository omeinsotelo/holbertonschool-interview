#include "palindrome.h"
/**
 * is_palindrome - define if a number is a palindrome
 *
 * @n: number
 *
 * Return: 1if it is  or 0 if not
 */
int is_palindrome(unsigned long n)
{
	int cont1 = 0;
	int cont2 = 0;
	unsigned long array[1024];
	unsigned long newNumber = n;

	while (newNumber != 0)
	{
		array[cont1++] = newNumber % 10;
		newNumber = newNumber / 10;
	}

	cont1--;
	for ( ; cont1 > cont2; cont1--, cont2++)
	{
		if (array[cont1] != array[cont2])
		return (0);
	}

	return (1);
}
