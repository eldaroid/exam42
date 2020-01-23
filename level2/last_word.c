/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:54:38 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/23 16:25:15 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnumber(int    nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb %= 1000000000;
        nb *= -1;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnumber(nb / 10);
        ft_putnumber(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}


void	last_word(char *str)
{
	int		i;
	
	i = 0;
	while(str[i])
		i++;
	i--;
	while (str[i] == ' ')
		i--;
	while (str[i] != ' ')
		i--;
	i++;
	while (str[i] && str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}		
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}