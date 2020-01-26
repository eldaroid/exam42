/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 18:09:28 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/26 18:19:38 by fgracefo         ###   ########.fr       */
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
	char	*new;
	int		i;
	int		j;

	i = 0;
	if (!(new = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (0);
	while (str[i])
		i++;
	new[i] = str[i];
	j = 0;
	while (--i >= 0)
		new[j++] = str[i];
	return (new);
}

int		main(void)
{
	char	last[] = "ABCDE";
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