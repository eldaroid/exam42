/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2do_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 23:11:17 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/13 00:39:11 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	calcul(char *s1, char *operator, char *s2)
{
	int	res;
	int s_1;
	int s_2;

	s_1 = atoi(s1);
	s_2 = atoi(s2);
	if (operator[0] == '*')
		res = s_1 * s_2;
	else if (operator[0] == '+')
		res = s_1 + s_2;
	else if (operator[0] == '-')
		res = s_1 - s_2;
	else if (operator[0] == '/')
		res = s_1 / s_2;
	else if (operator[0] == '%')
		res = s_1 % s_2;
	return (res);
}

int main(int argc, char **argv)
{
	int res;
	
	res = 0;
	if (argc == 4)
	{
		res = calcul(argv[1], argv[2], argv[3]);
		printf("%d\n", res);
	}
	write(1, "\n", 1);
}
