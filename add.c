#include "monty.h"
/**
 * f_add - a dd s  t h e   t op    tw e m en t s   o  f   t h e   s t a c k.
 * @head: s t a c k   h e a d
 * @counter: li n e _ n  u m b e r
 * Return: n o   r e t u r n
*/
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->n + h->next->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
