/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:28:42 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/23 14:23:35 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_doubles(char *s1, char s, int i)
{
	int		j;

	j = 0;
	while (j < i)
	{
		if (s1[j] == s)
			return (0);
		j++;
	}
	return (1);
}

void	iter(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while(s1[i])
	{
		if (check_doubles(s1, s1[i], i))  //проверяем встречалась ли эта буква до этого
		{
			j = 0;
			while (s2[j])
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i], 1);
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		iter(argv[1], argv[2]);
	write(1,"\n", 1);
	return (0);
}