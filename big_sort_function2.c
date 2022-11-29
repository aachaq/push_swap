#include    "push_swap.h"

int	to_be_push(int size)
{
	int	to_push;

	if (size < 105)
		to_push = (size - 5) / 3 + 1;
	else if (size < 505)
		to_push = (size - 5) / 5 + 1;
	else
		to_push = (size - 5) / 7 + 1;
	if (to_push == 0)
		to_push = 1;
	return (to_push);
}