/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:25:26 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/23 14:48:03 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int		array[256] = {0};
	int		i;
	int		j;

	i = 0;
	while (s2[i])
	{
		if (array[(int)s2[i]] == 0)
			array[(int)s2[i]] = 1;
		i++;
	}
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (array[(int)s1[i]] == 1)
		{
			array[(int)s1[i]] = 2;
			write(1, &s1[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv) 
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}