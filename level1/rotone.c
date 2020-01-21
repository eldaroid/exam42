/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:40:51 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/21 20:50:20 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 90) || (argv[1][i] >= 97 && argv[1][i] <= 122))
			{
				if (argv[1][i] == 122 || argv[1][i] == 90)
					ft_putchar(argv[1][i] - 25);
				else
					ft_putchar(argv[1][i] + 1);
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}