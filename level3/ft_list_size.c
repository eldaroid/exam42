#include "ft_list_size.h"
#include <stdio.h>
#include <stdlib.h>

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

int		ft_list_size(t_list *list)
{
	int		count;

	count = 0;
	if (!list)
		return (0);
	while (list)
	{
		printf("node = %s",list->data);
		list = list->next;
		count++;
	}
	return (count);
}

int	main(void)
{
	t_list	*list;
	int 	count;

	list = NULL;
	list = add_list(list, "ABC");
	list = add_list(list, "abc");
	list = add_list(list, "uuu");
	count = ft_list_size(list);	
	// printf("count = %d", count);
}