#include "ps.h"

int	rotate_sort(stack *s, bool print, bool checker)
{
	int count;
	int first;
	node *current;

	count = 0;
	if (s->lst == NULL)
		return (-1);
	first = s->lst->data;
	rotate(s);
	if (print == true)
		ft_putstr("ra\n");
	if (is_sorted(s) == true)
	{
		if (print == false)
			reverse_reset(first, s);
		return count;
	}
	++count;
	while (s->lst->data != first)
	{
		rotate(s);
		if (print == true)
			ft_putstr("ra\n");
		if (is_sorted(s) == true)
		{
			if (checker == false)
				reverse_reset(first, s);
			return (count);
		}
		++count;
	}
	return (-1);
}

int	reverse_sort(stack *s, bool print, bool checker)
{
	int count;
	int first;
	node *current;

	count = 0;
	if (s->lst == NULL)
		return (-1);
	first = s->lst->data;
	reverse_rotate(s);
	if (print == true)
		ft_putstr("rra\n");
	if (is_sorted(s) == true)
	{
		if (print == false)
			rotate_reset(first, s);
		return count;
	}
	++count;
	while (s->lst->data != first)
	{
		reverse_rotate(s);
		if (print == true)
			ft_putstr("rra\n");
		if (is_sorted(s) == true)
		{
			if (checker == false)
				reverse_reset(first, s);
			return (count);
		}
		++count;
	}
	return (-1);
}
