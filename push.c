#include "monty.h"

#define LIMIT 3

/**
 * push - pushes an element to the stack.
 * @n - is an integer.
 *
 * exit: EXIT_FAILURE
 */

void push(stack_t **stack, unsigned int line_number)
{
	int input[100] = {0};
	stack_t *temp = NULL;
	
	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		printf("stack overflow\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		if (argc != 2)
		{
			printf("L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}

		if (!is_integer(argv[1]))
		{
			printf("L%d: usage: push integer\n", line_number);
 			exit(EXIT_FAILURE);
		}

	printf("Enter an element to be inserted: ");
	fgets(input, sizeof(input), stdin);
	temp->n = atoi(input);
	temp->next = *stack;
	*stack = temp;
	line_number += 1;
	}
}
