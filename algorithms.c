#include "ps.h"

int	insertion_sort(stack *a, stack *b, bool print)
{
	ft_putstr("Let's try insertion.\n");
	int min;
	int count;

	count = 0;
	while (is_empty(a) == false && is_sorted(a) == false)
	{
		min = get_min(a);
		if (size(a) == 2)
		{
			swap(a);
			if (print == true)
				ft_putstr("sa\n");
		}
		else if (min == a->lst->data)
		{
			push(a, b);
			if (print == true)
				ft_putstr("pb\n");
			++count;
		}
		else if (a->lst->next != NULL && min == a->lst->next->data)
		{
			swap(a);
			if (print == true)
				ft_putstr("sa\n");
			++count;
		}
		else if (min == last(a))
		{
			reverse_rotate(a);
			if (print == true)
				ft_putstr("rra\n");
			++count;
		}
		else
		{
			rotate(a);
			if (print == true)
				ft_putstr("ra\n");
			++count;
		}
	}
	count += push_all(b, a, print);
	return (count);
}