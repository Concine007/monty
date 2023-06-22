#include "monty.h"
/**
 * f_mod - c o m p u t e s   t h e   r e s t   o f   t h e   d i v i si on
 * @head: s t a c k   h e a d
 * @counter: l i n e _ n u m b e r
 * Return: n o   r e t u r n
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = h->next->n % h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
