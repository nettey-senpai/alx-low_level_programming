#include <stdio.h>
#include "main.h"

/**
 *main - this prints the name of the program
 *@argc: the number of arguments
 *@argv: the array of arguments
 *Return: always 0
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
