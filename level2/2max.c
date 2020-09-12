/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2max.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:52:43 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/12 21:31:50 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{
    int     max;

    if (!tab)
        return (0);
    max = 0;
    while (len-- > 0)
    {
        if (tab[len] > max)
            max = tab[len];
    }
    return (max);
}

int		main(void)//
{//
	int	*tab;//

	if (!(tab = (int*)malloc(sizeof(int) * 3)))//
		return (0);//
	tab[0] = 7;//
	tab[1] = 12;//
	tab[2] = 18;//
	printf("%d", max(tab, 3));//
	return (0);//
}
