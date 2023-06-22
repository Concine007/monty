#include "monty.h"
/**
  *f_rotl- r o t a t e s   th e   s t  a c k   t o   t h e   to p
  *@head: s ta c k   h  e ad
  *@counter: li n e  _n  um b e r
  *Return: n o  r  e t u r n
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *t = *head, *a;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	a = (*head)->next;
	a->prev = NULL;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = *head;
	(*head)->next = NULL;
	(*head)->prev = t;
	(*head) = a;
}
