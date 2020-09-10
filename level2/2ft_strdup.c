/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:02:50 by fgracefo          #+#    #+#             */
/*   Updated: 2020/09/10 17:20:04 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *s)
{
	int len;
	int	i;

	i = 0;
	len = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char    *ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	if (!(s = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int		main(void)
{
	printf("%s\n", ft_strdup("thisismystring"));
	return (0);
}
