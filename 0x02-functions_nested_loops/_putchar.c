#include "main.h"
#include <unistd.h>

/**
 * _puchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 */
int _putcgar(char c);
{
	return(write(1, &c, 1));
}
