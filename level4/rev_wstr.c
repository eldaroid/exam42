// #include <stdio.h>
#include <unistd.h>

int		is_valid(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

void	printf_str(char *str, int i)
{
	while (str[i] && !(is_valid(str[i])))
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	rev_wstr(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		if (is_valid(str[i - 1]))
		{
			printf_str(str, i);
			count++;
		}
		if (is_valid(str[i - 1]) && count > 0)
			write(1, &str[i - 1], 1);
		i--;
	}
	if (i == 0 && !(is_valid(str[i])))
		printf_str(str, i);
}

int		main(int argc, char **argv)
{
	// char *c = "aaa bbb";
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	// write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}