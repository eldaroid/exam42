/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:46:49 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/18 00:56:42 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    first_word(char *str)
{
    int     flag;
    int     i;

    i = 0;
    flag = 0;
    while(str[i] == ' ' && str)
        i++;
    while(str[i] != ' ' && str && str[i] >= 32 && str[i] <= 126)
    {
        ft_putchar(str[i]);
        i++;
        if(str[i] == ' ')
            flag = 1;
    }
}

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        // ft_putchar('e');
        ft_putchar('\n');
    }
    else
        first_word(argv[argc - 1]);
        ft_putchar('\n');
    return (0);
}