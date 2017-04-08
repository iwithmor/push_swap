#include "ps.h"

bool	is_empty(stack *s)
{
	if (s->lst == NULL)
		return true;
	return false;
}

bool	is_sorted(stack *s)
{
	node *current;
	if (s->lst == NULL)
		return true;
	current = s->lst;
	while (current->next != NULL)
	{
		if (current->next->data < current->data)
			return false;
		current = current->next;
	}
	return true;
}

void	checker(stack *a)
{
	if (is_sorted(a))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}
