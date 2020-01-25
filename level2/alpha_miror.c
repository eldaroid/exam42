/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_miror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 21:33:42 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/24 22:05:56 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    lower_case(char c)
{
    int     i;
    int     j;
    char    a;

    j = 122;
    i = 0;
    a = 'z';
    while (i < ((int)c - 97))
        i++;
    while (i-- > 0)
        a--;
    write(1, &a, 1);
}

void    upper_case(char c)
{
    int     i;
    int     j;
    char    a;

    j = 122;
    i = 0;
    a = 'Z';
    while (i < ((int)c - 65))
        i++;
    // printf("c = %c\n", c);
    while (i-- > 0)
        a--;
    write(1, &a, 1);
}

int     alpha_miror(char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            lower_case(str[i]);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            upper_case(str[i]);
        else
            write(1, &str[i], 1);
        i++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        alpha_miror(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}