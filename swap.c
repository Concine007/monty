#include "monty.h"
/**
 * f_swap - a d d s   t h e   t o p   t w o   e le m e  n t s o f t he st ac k
 * @head: s ta  c k   h e a d
 * @counter: l i n e _ n u  m b e r
 * Return: n o   r e t u r n
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int l = 0, a;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->n;
	h->n = h->next->n;
	h->next->n = a;
}
