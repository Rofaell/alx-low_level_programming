#include<stdio.h>
#include"main.h"

/**
* print_sign - Entry point
* Description: checks  sign of a number.
* @n: the integer value it receives
* Return: 1 if n is greater & less than zero, else return 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
