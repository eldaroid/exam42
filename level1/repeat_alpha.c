/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:10:16 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/20 22:13:18 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     write_alpha1(char target)
{
    char    c;

    c = 'A';
    while(target != c)
    {
        ft_putchar(target);
        c++;
    }
    ft_putchar(target);
    return (0);
}

int     write_alpha2(char target)
{
    char    c;

    c = 'a';
    while(target != c)
    {        
        ft_putchar(target);
        c++;
    }
    ft_putchar(target);
    return (0);
}

int     repeat_alpha(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 65 && str[i] <= 90)
            write_alpha1(str[i]);
        if (str[i] >= 97 && str[i] <= 122)
            write_alpha2(str[i]);
        else
            ft_putchar(str[i]);
        i++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        repeat_alpha(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}