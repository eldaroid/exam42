/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:45:00 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/21 17:59:08 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *string)
{
    int     i;

    i = 0;
    while (string[i])
    {
        ft_putchar(string[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    ft_putstr(argv[1]);
    return (0);
}