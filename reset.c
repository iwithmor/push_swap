#include "ps.h"

void rotate_reset(int first, stack *s)
{
	while (s->lst->data != first)
		rotate(s);
}

void reverse_reset(int first, stack *s)
{
	while (s->lst->data != first)
		reverse_rotate(s);
}
