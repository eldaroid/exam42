/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:09:21 by hthunder          #+#    #+#             */
/*   Updated: 2020/01/23 13:21:12 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	if (s)
	{
		while (*s != '\0')
		{
			ft_putchar(*s);
			s++;
		}
	}
}

int		ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}


void	ft_putnumber(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n < 10)
			ft_putchar(n + '0');
		else
		{
			ft_putnumber(n / 10);
			ft_putchar(n % 10 + '0');
		}
	}
}


int		main(int	argc, char **argv)
{
	int		i;

	i = ft_strlen(argv[1]);
	ft_putnumber(i);
	return (0);
}
