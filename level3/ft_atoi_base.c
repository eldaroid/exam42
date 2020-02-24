#include <stdio.h>
#include <unistd.h>

int		is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		is_correct(char c, int base)
{
	char array[17] = "0123456789abcdef";
	char array2[17] = "0123456789ABCDEF";

	while (base--)
	{
		if (c == array[base] || c == array2[base])
			return (1);
		return (0);
	}
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	while (is_blank(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str_base <= 16 && str[i] != 0 && is_correct(str[i], str_base))
	{
		
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], atoi(av[2])));
	return (0);
}