/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 18:52:15 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/17 20:14:48 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    first_params(char *a)
{
    int i;

    i = 0;
    while (a[i])
    {
        ft_putchar(a[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc > 1)
        first_params(argv[argc - 1]);
    else
        ft_putchar('\n');
    
    return (0);
}