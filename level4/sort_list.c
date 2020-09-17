#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_list.h"

int ascending(int a, int b)
{
	return (a <= b);
}

t_list *add_to_list(t_list *last, int s1)
{
	t_list *list;

	if (!(list = (malloc(sizeof(t_list)))))
		return (0);
	if (list)
	{
		list->data = s1;
		list->next = last;
	}
	return (list);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *new;
	t_list *tmp;
	int		tmp2;

	new = lst;
	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (!(ascending(lst->data, tmp->data)))
			{
				tmp2 = lst->data;
				lst->data = tmp->data;
				tmp->data = tmp2;
			}
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (new);
}

int main()
{
	t_list *list;

	list = NULL;
	list = add_to_list(list, 5);
	list = add_to_list(list, 2);
	list = add_to_list(list, 8);
	list = sort_list(list, &ascending);
	return (0);
}