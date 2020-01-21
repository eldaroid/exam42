/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:16:24 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/21 00:38:11 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *string)
{
    int     i;

    i = 0;
    while (string[i])
        i++;
    return (i);
}

int     check(char *s1, char *s2, int k)
{
    int     j;

    j = 0;
    while (s1[k] == s2[j])
    {
        k++;
        j++;
    }
    if (j == ft_strlen(s2))
        return (1);
    return (0);
}

int     replace(char *s1, char *s2, char *s3, int k)
{
    int     j;

    j = 0;
    while (s1[k] == s2[j])
    {
        s1[k] = s3[j];
        k++;
        j++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    int     j;

    j = 0;
    if (argc == 4)
    {
        while (argv[1][j])
        {
            if (check(argv[1], argv[2], j))
            {
                replace(argv[1], argv[2], argv[3], j);
            }
            ft_putchar(argv[1][j]);
            j++;
        }
    }
    ft_putchar('\n');
    return (0);
}