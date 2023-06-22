#include "monty.h"
/**
 * f_pall - p r i n t s   t h e   s t a ck
 * @head: s t a c k   h e a d
 * @counter: n o   u s e d
 * Return: n o   r e t u r n
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
