#include <unistd.h>
#include <stdio.h>

int		is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		is_valid(char c, int str_base)
{
	char array[17] = "0123456789abcdef";
	char array2[17] = "0123456789ABCDEF";

	while(str_base--)
	{
		if (c == array[str_base])
			return (1);
		else if (c == array2[str_base])
			return (1);
	}
	return (0);
}

int		number(char c)
{
	int res;

	res = 0;
	if (c >= 'A' && c <= 'Z')
		res = c - 'A' + 10;
	if (c >= 'a' && c <= 'z')
		res = c - 'a' + 10;
	else if (c >= 0 && c <= 9)
		res = c - '0';
	return (res);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		res;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (is_blank(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str_base <= 16 && is_valid(str[i], str_base))
	{
		res = res * str_base + number(str[i]);
		i++;
	}
	return (res * sign);
}

int		main(int argc, char **argv)
{
	printf("ans = %d", ft_atoi_base(argv[1], 16));
	return (0);
}