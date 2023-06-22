#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - m o n  t  y   c o d e   i n t e r p r e t e r
* @argc: nu m b er   o  f   a r g um  e n t s
* @argv: m o n t y   f i l e   lo  c at i  o n
* Return: 0  o n   s u c ce s s
*/
int main(int argc, char *argv[])
{
	char *co;
	FILE *f;
	size_t s = 0;
	ssize_t line = 1;
	stack_t *st = NULL;
	unsigned int cou = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	bus.file = f;
	if (!f)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line > 0)
	{
		co = NULL;
		read_line = getline(&co, &s, f);
		bus.content = co;
		cou++;
		if (line > 0)
		{
			execute(co, &st, cou, f);
		}
		free(co);
	}
	free_stack(st);
	fclose(f);
return (0);
}
