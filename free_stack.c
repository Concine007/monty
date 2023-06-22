#include "monty.h"
/**
* free_stack - f r e e s   a   d o u b l y   l i n k e d   l i st
* @head: he ad   o f    t h e   s t a c k
*/
void free_stack(stack_t *head)
{
	stack_t *a;

	a = head;
	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
