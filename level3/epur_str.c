/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 21:06:49 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/14 23:08:40 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int     ft_count(char *s1)
{
    int     i;
    int     count;
    int     flag;

    i = 0;
    count = 0;
    flag = 0;
    while (s1[i])
    {
        if (s1[i] != ' ' && flag == 0)
        {
            count++;
            flag = 1;
        }
        else if (s1[i] == ' ')
        {
            flag = 0;
        }
        i++;
    }
    return (count);
}

void    epur_str(char *s1)
{
    int     i;
    int     flag;
    int     count_words;

    flag = 0;
    i = 0;
    count_words = 0;
    while (s1[i])
    {
        if (s1[i] != ' ' && s1[i] != '\t')
        {
            write(1, &s1[i], 1);
            flag = 1;
        }
        if (flag == 1 && s1[i] == ' ' && count_words < ft_count(s1) - 1)
        {
            write(1, " ", 1);
            count_words++;
            flag = 0;
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        epur_str(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}