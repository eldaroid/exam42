#include <stdio.h>

unsigned int				pgcd(unsigned int nb1, unsigned int nb2)
{
	int		i;

	i = nb1;
	while (i > 0)
	{
		if (nb1 % i == 0 && nb2 % i == 0)
			return (i);
		i--;
	}
	return (1);
}

x

unsigned int	lcm1(unsigned int a, unsigned int b)
{
	unsigned int GCD = pgcd(a, b);
	return (GCD ? (a * b / GCD) : 0);
}

int				main(void)
{
	int		nb1 = 132;
	int		nb2 = 72;

	printf("NOK2 = %u\n",lcm1(nb1, nb2));
	printf("NOK1 = %u\n",lcm2(nb1, nb2));
	return (0);
}