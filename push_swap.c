#include "ps.h"

int	push_all(stack *b, stack *a, bool print)
{
	int count;

	count = 0;
	while (is_empty(b) == false)
	{
		push(b, a);
		if (print == true)
			ft_putstr("pa\n");
		++count;
	}
	return (count);
}

int		get_min(stack *s)
{
	int		min;
	node	*current;

	current = s->lst;
	min = current->data;

	while (current->next)
	{
		min = (current->data < min)? current->data: min;
		current = current->next;
	}
	min = (current->data < min)? current->data : min;
	return min;
}

void	push_swap(stack *a, stack *b, bool print, bool checker)
{
	int count;

	if (is_sorted(a))
		return ;
	count = rotate_sort(a, false, checker);
	if (count > 0)
	{
		if (reverse_sort(a, false, checker) < count)
			reverse_sort(a, print, checker);
		else
			rotate_sort(a, print, checker);
		return ;
	}
	insertion_sort(a, b, print);
}
