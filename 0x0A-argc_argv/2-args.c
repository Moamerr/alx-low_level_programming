#include <stdio.h>
/**
 * main- prints all arguments it receives
 * @argc: size of argv
 * @argv: array with size argc
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
