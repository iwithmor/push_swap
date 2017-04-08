#include "ps.h"

void add_all(stack *s, int argc, char **args)
{
	int i;

	i = 1;
	while (i < argc)
	{
		add(s, atoi(args[i]));
		++i;
	}
}

void print_stack(stack *s)
{
	node *current;

	current = s->lst;
	while (current != NULL)
	{
		ft_putnbr(current->data);
		current = current->next;
	}
}

void pop(stack *s)
{
	node *old_top;

	old_top = s->lst;
	if (old_top == NULL)
		return ;
	s->lst = s->lst->next;
	free(old_top);
}

void clear_stack(stack *s)
{
	while (s->lst != NULL)
		pop(s);
	free(s);
}

int last(stack *s)
{
	node *current;

	current = s->lst;
	while (current->next != NULL)
		current = current->next;
	return (current->data);
}

int	size(stack *s)
{
	int count;
	node *current;

	count = 0;
	current = s->lst;
	while (current != NULL)
	{
		++count;
		current = current->next;
	}
	return (count);
}
