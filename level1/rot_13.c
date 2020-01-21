/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:03:41 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/21 17:34:54 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char     replacement(char c)
{
    if (c >= 65 && c <= 90)
    {
        if (c + 13 > 90)
            c -= 13;
        else if (c - 13 < 65)
            c += 13;
    }
    else if (c >= 97 && c <= 122)
    {
        if (c + 13 > 122)
            c -= 13;
        else if (c - 13 < 97)
            c += 13;
    }
    return (c);
}

int     main(int argc, char **argv)
{
    int     i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if ((argv[1][i] >= 65 && argv[1][i] <= 90) || (argv[1][i] >= 97 && argv[1][i] <= 122))
                argv[1][i] = replacement(argv[1][i]);
            ft_putchar(argv[1][i]);
            i++;
        }
        
    }
    ft_putchar('\n');
    return (0);
}