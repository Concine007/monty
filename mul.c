#include "monty.h"
/**
 * f_mul - m u l t i p l i e s   t h e   t o p t wo    el e me n  t s t a c k.
 * @head: st ac k   h  e a d
 * @counter: l in e _ n  u m b er
 * Return: n o   r e t u r n
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->next->n * h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
