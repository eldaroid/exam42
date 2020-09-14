/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:00:55 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/14 20:44:46 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	print_bits(unsigned char octet)
// {
//     int     i;

//     i = 128;
//     while (i > 0 && octet >= 0)
//     {
//         (octet / i) ? write(1, "1", 1) : write(1, "0", 1);
//         (octet / i) ? octet -= i : 0;
//         i /= 2;
//     }
// }

void	print_bits(unsigned char octet)
{
	int i = 256;

	i >>= 1;
	while (i)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}

void	print_bits2(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}
int        main(void)//
{//
    char a = '&';
    print_bits2(a);//
    write(1, "\n", 1);//
    // print/its(n);//
}