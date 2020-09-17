#include "3ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *add_to_list(t_list *last, char *s1)
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

int ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;

	if (s1)
	{
		while (s1[i])
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	else
		return (-1);
	return (s1[i] - s2[i]);
}

void 	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *new_begin;
	t_list *tmp;

	new_begin = *begin_list;
	while(new_begin && cmp(new_begin->data, data_ref))
	{
		tmp = new_begin;
		new_begin = new_begin->next;
		free(tmp);
	}
	while (new_begin && new_begin->next)
	{
		if (cmp((new_begin)->next->data, data_ref) == 0)
		{
			tmp = new_begin->next;
			new_begin->next = tmp->next;
			free(tmp);
		}
		(new_begin) = (new_begin)->next;
	}
}

int main(void)
{
	t_list *list;

	list = NULL;
	list = add_to_list(list, "ABC");
	list = add_to_list(list, "BCD");
	list = add_to_list(list, "DEF");
	list = add_to_list(list, "ABC");
	list = add_to_list(list, "EFG");
	// printf("%s\n", list->data);
	// list = list->next;
	// printf("%s\n", list->data);
	// list = list->next;
	// printf("%s\n", list->data);
	ft_list_remove_if(&list, "ABC", &ft_strcmp);
	// printf("%s\n", list->data);
	// 	list = list->next;
	// printf("%s\n", list->data);
	// list = list->next;
	// printf("%s\n", list->data);
	return (0);
}
