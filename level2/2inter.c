/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2inter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:20:54 by fgracefo          #+#    #+#             */
/*   Updated: 2020/09/10 18:15:49 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		j = 0;
		while (s2[j] && s2[j] != s1[i])
			j++;
		if (s2[j] == s1[i] && s1[i])
			write(1, &s1[i], 1);		
		i++;
	}
}

int main(int argc, char **argv)
{
	int		len;

	len = 0;
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
			// write(1, "d", 1);
	}
	write(1, "\n", 1);
	return (0);
}