/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:32:32 by fgracefo          #+#    #+#             */
/*   Updated: 2020/09/14 20:44:27 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// & - побитовое умножение и (and)
// | - побитовое или (or)
// >> n - сдвиг вправо на n
// << n - сдвиг битов влево на n

// задание заключается в том, чтобы сделать реверс битов:
// 																0010	0110
// 																(1234	5678)

// 																0110	0100
// 																(8765	4321)

// unsigned char	reverse_bits(unsigned char octet)
// {
// 	octet = (octet & 0x0F) << 4 | (octet & 0xF0) >> 4;    
// 															//  0110	0010
// 															// (5678	1234)
// 	octet = (octet & 0x33) << 2 | (octet & 0xCC) >> 2;
// 															//  1001	1000
// 															// (7856	3412)
// 	octet = (octet & 0x55) << 1 | (octet & 0xAA) >> 1;
// 															//  0110	0100
// 															// (8765	4321)
// 	return (octet);
// }

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char new;
	unsigned char tmp;

	new = 240;
	tmp = 240;
	octet = ((octet << 4) & tmp) | ((octet & new) >> 4);
	tmp = 170;
	new = 85;
	octet = ((octet & new) << 1) | ((octet & tmp) >> 1);
	tmp = 204;
	new = 51;
	octet = ((octet & new) << 2) | ((octet & tmp) >> 2);
	print_bits(octet);
	return (0);
}

int	main(void)
{
	unsigned char c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}