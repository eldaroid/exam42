/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:40:00 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/24 16:03:00 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_union(char *s1, char *s2)
{
	int		array[256] = {0};
    int     i;
    int     j;

    i = 0;
    while (s1[i])
    {
        if (array[(int)s1[i]] == 0)
        {
            write(1, &s1[i], 1);
            array[(int)s1[i]] = 1;
        }
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (array[(int)s2[i]] == 0)
        {
            write(1, &s2[i], 1);
            array[(int)s2[i]] = 1;
        }
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