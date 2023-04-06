#include "main.h"

/**
 ** _memset():fills memory with a constant byte
 *@s:the memory area to be filled
 *@b:char to be copied
 *@n:number of times to copy b
 *Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
