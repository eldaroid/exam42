#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *s1)
{
	int		res;

	res = 0;
	while (*s1 && *s1 >= '0' && *s1 <= '9')
	{
		res = res * 10 + (*s1 - '0');
		s1++;
	}
	return (res);
}

void	print_hex(int nb)
{
	char *arr;

	arr = "0123456789abcdef";

	if (nb >= 16)
		print_hex(nb / 16);
	write(1, &arr[nb % 16], 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}