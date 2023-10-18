#include "simpleshell.h"

/**
* strglength - return the lenght of the string
* @str: string
* Return: longi
*/
int strglength(char *str)
{
	int longi = 0;

	while (*str != '\0')
	{
		longi++;
		str++;
	}

	return (longi);
}
