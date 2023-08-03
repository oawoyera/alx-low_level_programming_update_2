#include "main.h"

/**
 * _strlen_recursion - function to return the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
