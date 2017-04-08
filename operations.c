#include "ps.h"

void reverse_rotate(stack *s)
{
	node *new_top;
	node *current;

	if (s->lst == NULL || s->lst->next == NULL)
		return ;
	current = s->lst;
	while (current->next->next != NULL)
		current = current->next;
	new_top = current->next;
	current->next = NULL;
	new_top->next = s->lst;
	s->lst = new_top;
}

void rotate(stack *s)
{
	node *new_end;
	node *current;

	if (s->lst == NULL || s->lst->next == NULL)
		return ;
	new_end = s->lst;
	s->lst = s->lst->next;
	current = s->lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new_end;
	new_end->next = NULL;
}

void swap(stack *s)
{
	node *old_top;
	node *new_top;

	if (s->lst == NULL || s->lst->next == NULL)
		return ;
	old_top = s->lst;
	new_top = s->lst->next;
	old_top->next = new_top->next;
	new_top->next = old_top;
	s->lst = new_top;
}

void push(stack *remove_top, stack *insert_top)
{
	node *new_top;

	if (remove_top->lst == NULL)
		return ;
	new_top = remove_top->lst;
	remove_top->lst = remove_top->lst->next;
	new_top->next = insert_top->lst;
	insert_top->lst = new_top;
}

void add(stack *s, int data)
{
	node *new;
	node *current;

	new = new_node(data);
	if (s->lst == NULL)
	{
		s->lst = new;
		return ;
	}
	current = s->lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}