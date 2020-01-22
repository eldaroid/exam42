/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:52:30 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/22 17:54:54 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int     ft_atoi(char const *str)
{
    long long int     res;
    int     negative;
    
    res = 0;
    negative = 1;
    while (*str == ' ')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            negative *= -1;
        str++;
    }
    while (ft_isdigit(*str))
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res * negative);
}

void    ft_putnumber(int    nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb %= 1000000000;
        nb *= -1;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnumber(nb / 10);
        ft_putnumber(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int     main(int argc, char **argv)
{
    int     res;
    
    res = ft_atoi(argv[1]);
    ft_putnumber(res);
    write(1, "\n", 1);
    return (0);
}