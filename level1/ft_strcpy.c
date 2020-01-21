/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 00:58:37 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/20 18:57:27 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

int     main(void)
{
    char s1[] = "Flavoi";
    char s2[] = "Flavoi";
    char s3[] = "Flavoir";
    
	strcpy(s1, s3);
    printf("real = %s\n", s2);
	ft_strcpy(s2, s3);
    printf("mine = %s\n", s2);
    return (0);
}