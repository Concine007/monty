#include "monty.h"
/**
 * f_push - a d d    no  d e   t o   t h e   st  a c k
 * @head: s ta  c k  h  ea  d
 * @counter: l in e _   n um  be  r
 * Return: n o   r et u r  n
*/
void f_push(stack_t **head, unsigned int counter)
{
	int z, y = 0, f = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || bus.arg[y] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	z = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, z);
	else
		addqueue(head, z);
}
