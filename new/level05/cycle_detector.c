#include "list.h"
#include <stdlib.h>

int		cycle_detector(const t_list *list)
{
	const t_list	*slow_ptr;
	const t_list	*fast_ptr;

	slow_ptr = list;
	fast_ptr = list;
	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
			return (1);
	}
	return (0);
}

