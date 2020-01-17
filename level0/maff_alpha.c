/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:17:48 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/17 20:28:14 by fgracefo         ###   ########.fr       */
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

    a = 'a';
    b = 'B';
    while (a <= 'z' && b <= 'Z')
    {
        ft_putchar(a);
        ft_putchar(b);
        a += 2;
        b += 2;
    }
    ft_putchar('\n');
    return (0);
}
