#include <stdio.h>
#include "main.h"
/**
 * main - this prints the number of arguments passed to the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv here, to prevent some compiler warning*/
	printf("%d\n", argc - 1); /* -1 because we want to subtract the program name*/

	return (0);
}
