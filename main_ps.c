#include "ps.h"

int main(int argc, char **args)
{
	stack *a;
	stack *b;

	a = new_stack();
	b = new_stack();
	if (argc > 1){
		verify_arguments(argc, args);
		add_all(a, argc, args);
		push_swap(a, b, true, PUSH_SWAP);
	}
	clear_stack(a);
	clear_stack(b);
    return 0;
}
