#include <stdio.h>
#include "lists.h"

/**
 * myStartupFun - Function to print a string before main is executed.
 *
 */
void myStartupFun(void) __attribute__ ((constructor));

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
