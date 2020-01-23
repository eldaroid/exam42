/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:52:39 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/23 17:56:04 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet & 0xF0) >> 4 | (octet & 0x0F) << 4);
}

unsigned char	reverse_bits(unsigned char octet)
{
	octet = (octet & 0x0F) << 4 | (octet & 0xF0) >> 4;    
															//  0110	0010
															// (5678	1234)
	octet = (octet & 0x33) << 2 | (octet & 0xCC) >> 2;
															//  1001	1000
															// (7856	3412)
	octet = (octet & 0x55) << 1 | (octet & 0xAA) >> 1;
															//  0110	0100
															// (8765	4321)
	return (octet);
}

int	main(void)
{
	unsigned char c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = swap_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	c = '&';
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}