#include "main.h"

/**
 * _strspn - function to get number of bytes of string in substring
 * @s: the string
 * @accept: the bytes to select from
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, len_of_accept;

	j = 0;
	while (*(accept + j) != '\0')
		j++;
	len_of_accept = j;

	i = 0;
	while (1)
	{
		if (s[i] == *accept)
		{
			i++;
		}
		else
		{
			for (k = 1; k < len_of_accept; k++)
			{
				if (s[i] == *(accept + k))
				{
					i++;
					break;
				}
			}
			if (k == len_of_accept)
				return (i * sizeof(char));
		}
	}
}
