/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:27:35 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/17 20:27:45 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{
    char    a;
    char    b;

    a = 'Y';
    b = 'z';
    while (b >= 'a' && a >= 'A')
    {
        ft_putchar(b);
        ft_putchar(a);
        a -= 2;
        b -= 2;
    }
    ft_putchar('\n');
    return (0);
}