#include "monty.h"
/**
  *f_sub- s u s t r a t i on
  *@head: st a c k   h e a d
  *@counter: l in e _ n u  m be r
  *Return: no   r e  t u rn
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *a;
	int su, nod;

	a = *head;
	for (nod = 0; a != NULL; nod++)
		a = a->next;
	if (nod < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	su = a->next->n - a->n;
	a->next->n = su;
	*head = a->next;
	free(a);
}
