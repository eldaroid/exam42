/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:54:56 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/31 14:24:26 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_isspace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    if (c >= 9 && c <= 13)
        return (1);
    return (0);
}

int     ft_count(char *s1)
{
    int     i;
    int     count;
    int     flag;

    flag = 0;
    i = 0;
    count = 0;
    while (s1[i])
    {
        if (!ft_isspace(s1[i]))
        {
            flag = 1;
        }
        if (ft_isspace(s1[i]) && flag == 1)
        {
            flag = 0;
            count++;
        }
        i++;
    }
    return (count);
}

void    expand_str(char *s1)
{
    int     i;
    int     flag;
    int     count_word;

    count_word = ft_count(s1) - 1;
    // printf("count = %d", count_word);
    flag = 0;
    i = 0;
    while (s1[i])
    {
        if (!ft_isspace(s1[i]))
        {
            flag = 1;
            write(1, &s1[i], 1);
        }
        if (ft_isspace(s1[i]) && flag == 1 && count_word > 0)
        {
            write(1, "   ", 3);
            flag = 0;
            count_word--;
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        expand_str(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}
