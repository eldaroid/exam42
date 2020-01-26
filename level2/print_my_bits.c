/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_my_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:49:58 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/26 17:17:12 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printf_bits(unsigned char octet)
{
    int     i;

    i = 128;
    while (i > 0 && octet >= 0)
    {
        (octet / i) ? write(1, "1", 1) : write(1, "0", 1);
        (octet / i) ? octet -= i : 0;
        i /= 2;
    }
}

void	print_bits(unsigned char octet)
{
    int     i;

    i = 256;
    while (i >>= 1)
        (octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

int     main(void)
{
    char    s = '&';

    printf_bits(s);
    return (0);
}