/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:47:10 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/21 16:58:50 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     case_of_letter(char *argv)
{
    int     i;

    i = 0;
    while (argv[i])
    {
        if (argv[i] >= 65 && argv[i] <= 90)
            argv[i] += 32;
        else if (argv[i] >= 97 && argv[i] <= 122)
            argv[i] -= 32;
        i++;
    }
    return (0);
}

int     ft_putstr(char *argv)
{
    int     i;

    i = 0;
    while (argv[i])
    {
        ft_putchar(argv[i]);
        i++;
    }
    return (1);
}

int     main(int argc, char **argv)
{
    int     i;
    
    i = 0;
    if (argc == 2)
    {
        case_of_letter(argv[1]);
        ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}