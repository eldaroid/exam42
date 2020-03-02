#include <stdlib.h>
#include "ft_list_size.h"
#include <stdio.h>

t_list  *add_list(t_list *list, char *data)
{
    t_list  *tmp;

    if(!(tmp = malloc(sizeof(t_list))))
        return (NULL);
    if (tmp)
    {
        tmp->data = data;
        tmp->next= list;
    }
    return (tmp);
}

int     list_size(t_list *list)
{
    int     count;

    count = 0;
    if (!list)
        return (0);
    while (list)
    {
        printf("noda = %s\n", list->data);
        list = list->next;
        count++;i    }
    return (count);
}

int     main(int argc, char **argv)
{
    t_list  *list;

    list = NULL;
    list = add_list(list, "AAA");
    list = add_list(list, "BBB");
    list = add_list(list, "CCC");
    printf("count = %d", list_size(list));
    return (0);
}