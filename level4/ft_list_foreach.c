#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*add_list(t_list *list, char c)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (new)
	{
		new->data = c;
		new->next = list;
	}
	return (new);
}

char	is_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

void    ft_list_foreach(t_list **begin_list, char (*f)(char c))
{
	t_list	*curr;

	curr = *begin_list;
	while (curr)
	{
		curr->data = (*f)(curr->data);
		curr = curr->next;
	}
}

void    ft_list_foreach2(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	if (list_ptr)
	{
		(*f)(list_ptr->data);
		ft_list_foreach(list_ptr->next, f);
	}
}

void	ft_print(t_list *list)
{
	while (list)
	{
		printf("%c", list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list	*list;

	list = NULL;
	list = add_list(list, 'a');
	list = add_list(list, 'b');
	// void (*f)(char c) = &is_upper;
	ft_list_foreach(&list, &is_upper);
	ft_print(list);
	return (0);
}