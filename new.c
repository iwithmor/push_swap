#include "ps.h"

stack *new_stack()
{
	return (stack *)malloc(sizeof(stack));
}

node *new_node(int data)
{
	node *n;
	
	n = (node *)malloc(sizeof(node));
	n->data = data;
	return n;
}