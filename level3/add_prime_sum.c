/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 19:12:29 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/30 21:05:20 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *s1)
{
    int     i;
    int     neg;
    int     res;

    neg = 1;
    i = 0;
    res = 0;
    if (!s1)
        return (0);
    while (s1[i] == ' ')
        i++;
    if(s1[i] == '-' || s1[i] == '+')
    {
        if (s1[i] == '-')
            neg += -1;
        i++;
    }
    while (s1[i] >= '0' && s1[i ] <= '9')
        res = (res * 10) + s1[i++] - '0';
    return (res * neg);        
}

void    ft_putnbr(int nb)
{
    char    c;

    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb %= 1000000000;
        nb *= -1;
    }
    if (nb < 0)
    {
        nb *= -1;
        write(1, "-", 1);
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }   
}

int     is_prime(int nb)
{
    int     i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= (nb / 2))
    {
        if (!(nb % i))
            return (0);
        else
            i += 1;
    }
    return (1);
}

int     main(int argc, char **argv)
{
    int     nb;
    int     res;

    if (argc == 2)
    {
        nb = ft_atoi(argv[1]);
        res = 0;
        while (nb-- > 1)
        {
            // printf("aaaa");
            if (is_prime(nb + 1))
            {
                res += nb + 1;
                // printf("bbbb");
            }
        }
        ft_putnbr(res);
    }
    write(1, "\n", 1);
    return (0);
}
