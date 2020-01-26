/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:27:49 by eldaroid          #+#    #+#             */
/*   Updated: 2020/01/25 15:49:30 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    if (argc == 4)
    {
        if (argv[2][0] == '-')
            printf("%d", atoi(argv[1]) - atoi(argv[3]));
        else if (argv[2][0] == '+')
        {
            printf("%d", atoi(argv[1]) + atoi(argv[3]));
        }
        else if (argv[2][0] == '/')
            printf("%d", atoi(argv[1]) / atoi(argv[3]));
        else if (argv[2][0] == '%')
            printf("%d", atoi(argv[1]) % atoi(argv[3]));
        else if (argv[2][0] == '*')
            printf("%d", atoi(argv[1]) * atoi(argv[3]));
    }
    return (0);
}