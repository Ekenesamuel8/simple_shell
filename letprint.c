#include "simpleshell.h"
/**
* letprint - function that will print strings to our standard output
* @msg: the strings it will receive
* Return: the strings
*/
int letprint(char *msg)
{
	int q = 0, cunt = 0;

	for (q = 0; msg[q]; q++)
		cunt += putcharr(msg[q]);

	return (cunt);
}

/**
* putcharr - it print out characters
* @q: argument it will receive
* Return: the character
*/
int putcharr(char q)
{
	return (write(STDOUT_FILENO, &q, 1));
}
