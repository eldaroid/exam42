/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2last_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 23:22:59 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/12 00:04:22 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		count_word(char *s1)
{
	int	i;
	int	flag;
	int	count;
	
	flag = 1;
	i = 0;
	count = 0;
	while (s1[i])
	{
		if (s1[i] != ' ' && flag == 1)
		{
			count++;
			flag = 0;
		}
		else if (s1[i] == ' ')
			flag = 1;
		i++;
	}
	return (count);
}

void	last_word(char *s1)
{
	int		words;
	int		i;

	i = 0;
	words = count_word(s1);
	while (s1[i])
	{
		i++;
	}
	i--;
	while (s1[i] == ' ' && i > 0)
		i--;
	while (s1[i] != ' ' && s1[i] != '\t' && i > 0)
	{
		i--;
	}
	while (s1[++i] && s1[i] != ' ')
	{
		write(1, &s1[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
