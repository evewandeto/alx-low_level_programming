#include "main.h"
#include <stdio.h>
/**
 * *_abs - value absolute
 * * Return: Always 0
 * * @n: The int to print
 * */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
