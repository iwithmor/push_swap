#include "ps.h"
#include <stdio.h>

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

int main(int argc, char **args)
{
	stack *a;
	stack *b;

	a = new_stack();
	b = new_stack();
	if (argc > 1){
		verify_arguments(argc, args);
		add_all(a, argc, args);
		push_swap(a, b, false, CHECKER);
		checker(a);
	}
	clear_stack(a);
	clear_stack(b);
    return 0;
}

