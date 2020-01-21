/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:02:12 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/21 20:17:26 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
			argv[1]++;
		while (*argv[1] != '\0' && (*argv[1] != ' ' && *argv[1] != '\t'))
			write(1, argv[1]++ ,1);
	}
	ft_putchar('\n');
	return (0);
}