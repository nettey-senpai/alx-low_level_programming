#include "main.h"
#include <stdlib.h>
/**
 * str_concat - this gets ends of input and add together for size
 * @s1: inputs one to concat
 * @s2: inputs two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, ab;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = ab = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[ab] != '\0')
		ab++;
	conct = malloc(sizeof(char) * (j + ab + 1));

	if (conct == NULL)
		return (NULL);
	j = ab = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}

	while (s2[ab] != '\0')
	{
		conct[j] = s2[ab];
		j++, ab++;
	}
	conct[j] = '\0';
	return (conct);
}

