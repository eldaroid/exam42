#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		main(int argc, char **argv)
{
	if (argv[0])
	{
		if (argc == 1)
			write(1, "0", 1);
		else
			ft_putnbr(--argc);
	}
	write(1, "\n", 1);
	return (0);
}