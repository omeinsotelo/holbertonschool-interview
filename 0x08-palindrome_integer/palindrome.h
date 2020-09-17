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
    unsigned long tmp = n;
    unsigned long reverse = 0;
    unsigned long rem = 0;

    while (tmp != 0)
    {
        rem = tmp % 10;
        reverse = reverse * 10 + rem;
        tmp = tmp / 10;
    }
    if (n == reverse)
        return 1;
    return 0;
}

	return (1);
}
