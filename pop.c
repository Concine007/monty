#include "monty.h"
/**
 * f_pop - p r i n ts    t h e   to p
 * @head: s ta c k   h e a  d
 * @counter: l i n e _ nu  m b e r
 * Return: no   r  e t u r n
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
