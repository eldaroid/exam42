/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 18:09:28 by fgracefo          #+#    #+#             */
/*   Updated: 2020/09/13 00:49:47 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *s1)
{
	int		i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int strlen;
	int i;
	char tmp;
	
	strlen = ft_strlen(str);
	i = 0;
	while (i < strlen)
	{
		strlen--;
		tmp = str[strlen];
		str[strlen] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}

int		main(void)
{
	char	last[] = "1234";
	char	*new1;
	int		i;

	i = 0;
	new1 = ft_strrev(last);
	while (new1[i])
	{
		write(1, &new1[i], 1);
		i++;
	}
	return (0);
}