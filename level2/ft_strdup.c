/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:56:23 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/22 18:01:39 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strdup(char *src)
{
    char    *new;
    
    if (!src)
        return (NULL);
    else
    {
        if (new = (char *)malloc(sizeoff(char) * ft_strlen(src) + 1))
    }
    return (new);
}