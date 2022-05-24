#include "lists.h"
#include <stdio.h>

void print_before_main(void) _attribute_ ((constructor));

/**
 * print_before_main - function that prints before the main
 * function is executed
 *
 * Return: void
 */
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n);
}

