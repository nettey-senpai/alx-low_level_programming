#include <stdio.h>
#include "main.h"
/**
 * main - this prints the number of arguments passed to the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
