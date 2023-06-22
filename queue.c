#include "monty.h"
/**
 * f_queue - p r i n t s    t h e   t o p
 * @head: s t a c k   he a d
 * @counter: l in e _ n u m b e r
 * Return: n o   r et  u r n
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - a dd   n o d e    t o   th e   t  ai  l   s t ac k
 * @n: n ew  _ v a l u e
 * @head: he a d   o f   th  e   s t ac k
 * Return: n o   r e t u r n
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new, *a;

	a = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		a->next = new;
		new->prev = a;
	}
}
