#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s1)
{
	int i;
	int sign;
	int nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (s1[i] == ' ')
		i++;
	while (s1[i] == '+' || s1[i] == '-')
	{
		if (s1[i] == '-')
			sign = -1;
		i++;
	}
	while (s1[i] >= '0' && s1[i] <= '9')
	{
		nb = nb * 10 + (s1[i] - '0');
		i++;
	}
	return (nb * sign);
}

int check_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			// printf("i = %d\n", i);
			// printf("nb = %d\n", nb);
			return (0);
		}
		i++;
	}
	// printf("fFFF");
	return (1);
}

int prime_sum(char *s1)
{
	int nb;
	int res;

	nb = ft_atoi(s1);
	// printf("%d\n", nb);
	// printf("%d\n", check_prime(nb));
	res = 0;
	while (nb > 1)
	{
		// printf("%d\n", check_prime(nb));
		if (check_prime(nb))
			res += nb;
		nb--;
	}
	return (res);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int res = prime_sum(argv[1]);
		printf("%d\n", res);
	}
	write(1, "\n", 1);
	return (0);
}
