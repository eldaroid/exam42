#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_add(t_list *list, char *data)
{
	t_list	*tmp;

	if (!(tmp = (t_list*)(malloc(sizeof(t_list)))))
		return (NULL);
	if (tmp)
	{
		tmp->data = data;
		tmp->next = list;
	}
	return (tmp);
}


int	cmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*tmp;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		curr = *begin_list;
		*begin_list = (*begin_list)->next;
		free(curr);
	}
	curr = *begin_list;
	while (curr && curr->next)
	{
		if (cmp(curr->next->data, data_ref) == 0)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
		}
		curr = curr->next;
	}
}

// void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// {
// 	t_list	*curr;
// 	t_list	*tmp;

// 	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
// 	{
// 		curr = *begin_list;
// 		*begin_list = (*begin_list)->next;
// 		free(curr);
// 	}
// 	curr = *begin_list;
// 	while (curr && curr->next)
// 	{
// 		if (cmp(curr->next->data, data_ref) == 0)
// 		{
// 			tmp = curr->next;
// 			curr->next = tmp->next;
// 			free(tmp);
// 		}
// 		curr = curr->next;
// 	}
// }

// void ft_list_remove_if(t_list **begin_list, char *data_ref, int (*cmp)())
// // void	ft_list_remove_if(t_list **begin_list, char *data_rev, (*cmp)())
void ft_list_remove_if(t_list **begin_list, char *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*tmp;

	tmp = 0;
	curr = 0;
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	curr = *begin_list;
	while (curr && curr->next)
	{
		if (cmp(curr->next->data, data_ref) == 0)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
		}
		else if (curr->next)
			curr = curr->next;
	}
}

int		main(void)
{
	t_list	*list;

	list = NULL;
	list = ft_add(list, "aaa");
	list = ft_add(list, "bbb");
	ft_list_remove_if(&list, "bbb", cmp);
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	return (0);
}