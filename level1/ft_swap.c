/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:00:38 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/21 18:37:12 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_swap(int *a, int *b)
{
    int     c;

    c = *a;
    *a = *b;
    *b = c;
}

int     main(int argc, char **argv)
{
    return (0);
}