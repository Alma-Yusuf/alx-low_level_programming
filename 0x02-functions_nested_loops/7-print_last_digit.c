#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
int lastDig;
if (n >= 0)
{
lastDig = n % 10;
}
else
{
lastDig = (n % 10) * -1;
}
_putchar('0' + lastDig);
return (lastDig);
}

