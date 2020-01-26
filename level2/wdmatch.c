/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:03:10 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/25 14:17:21 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     wdmatch(char *s1, char *s2)
{
    int     i;
    int     j;
    int     count;

    count = 0;
    i = 0;
    j = 0;
    while (s1[i])
    {
        while (s2[j] != s1[i] && s2[j])
            j++;
        if (s1[i] == s2[j])
            count++;
        i++;
    }
    if (count == ft_strlen(s1))
        return (1);
    else
        return (0);
}

int     main(int argc, char **argv)
{
    int     i;

    i = 0;
    if (argc == 3)
    {
        if (wdmatch(argv[1], argv[2]))
        {
            while (argv[1][i])
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}