#ifndef PS_H
# define PS_H

#include <stdlib.h>
#include <unistd.h>

typedef enum { false, true } bool;

# define PUSH_SWAP false
# define CHECKER true

typedef struct s_node
{
	int				data;
	struct s_node	*next;
} node;

typedef struct s_stack
{
	node*	lst;
} stack;

int     ft_strlen(char *s);
bool    is_digit(char c);
void	ft_putchar(char c);
void    ft_putstr(char *s);
void    ft_putnbr(int num);
node 	*new_node(int data);
stack	*new_stack();
bool	is_empty(stack *s);
bool	is_sorted(stack *s);
void	push_swap(stack *a, stack *b, bool print, bool checker);

#endif