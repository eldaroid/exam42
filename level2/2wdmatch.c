/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2wdmatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:45:44 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/12 22:00:17 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	wdmatch(char *s1, char *s2)
{
	int	i;
	int j;
	int strlen;

	i = 0;
	while (s1[i])
		i++;
	strlen = i;
	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s2[j] && s2[j] != s1[i])
		{
			j++;
		}
		if (s2[j] == s1[i])
			strlen--;
		i++;
	}
	if (strlen == 0)
		return (1);
	else
	{
		return (0);
	}
}

int main(int argc, char **argv)
{
	int i;
	int res;
	
	i = 0;
	if (argc == 3)
	{
		res = wdmatch(argv[1], argv[2]);
		if (res == 1)
		{
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}