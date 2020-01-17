/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:41:10 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/17 18:23:11 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    aff_a(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
		}
		i++;
	}
	ft_putchar('\n');
}

int    main(int argc, char **argv)
{
    if (argc == 1 || argc > 2)
    {
        ft_putchar('a');
        ft_putchar('\n');
    }
    else
        aff_a(argv[argc - 1]);
    return (0);
}