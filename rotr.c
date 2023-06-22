#include "monty.h"
/**
  *f_rotr- r o t a t e s   t  h e   s t a c k   t o   t h e   b o t t om
  *@head: st a c k   h e a d
  *@counter: li n e _ n u m be r
  *Return: n o  re t u r n
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *py;

	py = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (py->next)
	{
		py = co->next;
	}
	py->next = *head;
	py->prev->next = NULL;
	py->prev = NULL;
	(*head)->prev = py;
	(*head) = py;
}
