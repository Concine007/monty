#include "monty.h"
/**
 * f_pchar - p r i n  t s   t h e   c h a r   a t   t he a  c k
 * @head: sta c k   h e ad
 * @counter: l in  e _ n u m b e r
 * Return: no   r e  t u r n
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
