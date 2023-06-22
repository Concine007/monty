#include "monty.h"
/**
 * f_pint - p r i n t s  t  h e   t o p
 * @head: s t a c k   h e a d
 * @counter: l i n e _ n u m b  er
 * Return: no    re  t u   rn
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
