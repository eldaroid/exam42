/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:22:01 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/14 20:45:27 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_last(char **s1, int i, char c)
{
	while (i > 0)
	{
		i--;
		if ((*s1)[i] == c)
			return (0);
		
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	char array[256] = {0};
	int		i;

	i = 0;
	while (s1[i])
	{
		if (array[(int)s1[i]] == 0)
		{
			array[(int)s1[i]] = 1;
			write(1, &s1[i], 1);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		
		if (array[(int)s2[i]] == 0 && check_last(&s2, i, s2[i]))
			write(1, &s2[i], 1);
		i++;
	}
}

int     main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}