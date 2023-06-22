#include "monty.h"
/**
 * addnode - a d d   n o d e  to   t h  e  h e  a d   s t a c k
 * @head: h e a d   o f   t h e   s t a c k
 * @n: n e w_  va l u e
 * Return: n o   r e t u rn
*/
void addnode(stack_t **head, int n)
{

	stack_t *new, *a;

	a = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
