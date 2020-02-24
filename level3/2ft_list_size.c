/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:23:34 by eldaroid          #+#    #+#             */
/*   Updated: 2020/02/05 17:07:45 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./ft_list_size.h"
#include <stdlib.h>
#include <stdio.h>

// int     ft_list_size(t_list *begin_list)
// {
    
// }

t_list  *add_list(t_list    *list, char *data)
{
    t_list  *tmp;

    if (!(tmp = malloc(sizeof(t_list))))
        return (0);
    if (tmp)
    {
        tmp->data = data;
        tmp->next = list;
    }
    return (tmp);
}

int     ft_list_size(t_list *list_begin)
{
    int     count;
    t_list  *list;

    list = list_begin;
    count = 0;
    while (list)
    {
        list = list->next;
        count++;
    }
    return (count);
}

int     main(void)
{
    t_list  *list;
    int     count;

    list = add_list(list, "AbA");
    list = add_list(list, "BaB");
    count = ft_list_size(list);
    printf("count = %d", count);
    return (0);
}