/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:22:01 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/24 15:39:14 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    check_s1(char *s1, int i)
{
    int     j;
    j = 0;
    while (j < i)
    {
        if (s1[i] == s1[j])
            return (0);
        j++;
    }
    return (1);
}

int     check_s2(char *s1, char s2, int i)
{
    int     j;

    j = 0;
    while (s1[j] && j < i)
    {
        if (s1[j] == s2)
            return (0);
        j++;
    }
    return (1);
}

int     ft_union(char *s1, char *s2)
{
    int     i;

    i = 0;
    while (s1[i])
    {
        if (check_s1(s1, i))
            write(1, &s1[i], 1);
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (check_s1(s2, i) && check_s2(s1, s2[i], i))
            write(1, &s2[i], 1);
        i++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}