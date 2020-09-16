#include "ft_list_size.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

t_list	*add_list(t_list *structure, char *c)
{
	t_list	*list;

	if (!(list = (malloc(sizeof(t_list)))))
		return (0);
	if (list)
	{
		list->data = c;
		list->next = structure;;
	}
	return (list);
}

int main()
{
	t_list *mine;


	mine = NULL;
	mine = add_list(mine, "aba");
	mine = add_list(mine, "bbb");
	mine = add_list(mine, "ccc");
	printf("%d\n", ft_list_size(mine));
	return (0);
}
