#include <stdio.h>
#include <unistd.h>

int		ft_count(char *s1)
{
	int		i;
	int		count;
	int		flag;

	flag = 0;
	count = 0;
	while (*s1)
	{
		if ((*s1 != ' ' && *s1 != '\t') && flag == 0)
		{
			count++;
			flag = 1;
		}
		if (*s1 == ' ' || *s1 == '\t')
			flag = 0;
		s1++;
	}
	return (count);
}

void	ft_print(char c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		write(1, &c, 1);
	}
	else
		write(1, &c, 1);
}

int	rstr_capitalizer(char *s1)
{
	int		count_words;

	count_words = ft_count(s1);
	while (*s1 && count_words > 0)
	{
		// if (*s1 == ' ' || *s1 == '\t')
			ft_print(*s1);
		s1++;
	}
	return (count_words);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			printf("count_words == %d", rstr_capitalizer(argv[i]));
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}