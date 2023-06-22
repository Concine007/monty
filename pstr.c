#include "monty.h"
/**
 * f_pstr - p r i n t s   t he    s t r i n g   st a  r t i ng  a t    t he
 * @head: st a ck   h e a d
 * @counter: li n e _  n u m  b e r
 * Return: n o  r e t u r n
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
