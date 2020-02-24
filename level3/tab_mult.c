#include <unistd.h>

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		sign;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' ||  \
		str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i += 1;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && str[i] >= '0' && '9' >= str[i])
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}

void    ft_putnbr(int nb)
{
	char c;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 2)
	{
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(ft_atoi(argv[1]));
			write(1, " = ", 3);
			ft_putnbr(i * ft_atoi(argv[1]));
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}