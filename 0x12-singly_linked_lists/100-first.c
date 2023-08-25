#include <stdio.h>
/**
  *execute_before_main - prints before main
  *
  *Return: void.
  */
void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
