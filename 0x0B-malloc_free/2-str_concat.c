#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_strlen - counts and reutns string length
  * @s: that's the string
  *
  * Return: the length
  */
int _strlen(char *s)
{
int counter = 0;
while (*s != 0)
{
	counter++;
	s++;
}
return (counter);
}
/**
 * str_concat - concatenates two strings
 * @s1: one string
 * @s2: the other
 * Return: pointer to cat string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i;
	unsigned int j;
	int total = 0;

	if (*s1)
		total += _strlen(s1);
	if (*s2)
		total += _strlen(s2);
	for (i = 0; s2[i]; i++)
	{
		total++;
	}
	new = malloc((total * sizeof(char)) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		new[i] = s2[j];
	}
	new[i] = '\0';
	return (new);
}
