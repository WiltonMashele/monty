#include "monty.h"

#define LIMIT 3

/**
 * push - pushes an element to the stack.
 * @n - is an integer.
 *
 * exit: EXIT_FAILURE
 */

void push(int n)
{
	int i = 0;
	int arg = 0;

	if( i != n)
	{
		printf("Error: Line <line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}

	else
	{
		printf("Enter the element to be inserted: ");
	}
}
