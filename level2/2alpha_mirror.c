/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2alpha_mirror.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:30:56 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/12 19:44:48 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	lower_case(char c)
{
	int ca;
	char last;

	ca = (int)c - 'a';
	last = 'z';
	while (ca > 0)
	{
		last--;
		ca--;
	}
	write(1, &last, 1);
}

void	upper_case(char c)
{
	int ca;
	char last;

	ca = (int)c - 'A';
	last = 'Z';
	while (ca > 0)
	{
		last--;
		ca--;
	}
	write(1, &last, 1);
}

void new_letter(char *s1)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
			lower_case(s1[i]);
		else if (s1[i] >= 'A' && s1[i] <= 'Z')
			upper_case(s1[i]);
		else
		{
			write(1, &s1[i], 1);
		}
		
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		new_letter(argv[1]);
	}
	write(1, "\n", 1);
	return (0);	
}
