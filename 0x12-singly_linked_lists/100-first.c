#include <stdio.h>

void printed_before_main(void) __attribute__ ((constructor));

/**
 * printed_before_main - prints  a message,
 * before the execution of main
 *
 * Return: void
 */

void printed_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
