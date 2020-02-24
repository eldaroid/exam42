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

void	ft_print(char c, int flag)
{
	if (c >= 65 && c <= 90 && flag == 1)
		write(1, &c ,1);
	else if (c >= 97 && c <= 122 && flag == 1)
	{
		c -= 32;
		write(1, &c, 1);
	}
	else if (c >= 65 && c <= 90 && flag == 0)
	{
		c += 32;
		write(1, &c, 1);
	}
	else if (c >= 97 && c <= 122 && flag == 0)
		write(1, &c, 1);
}

int	rstr_capitalizer(char *s1)
{
	int		count_words;
	int		i;

	count_words = ft_count(s1);
	i = 0;
	while (s1[i] && count_words > 0)
	{
		if (s1[i] != ' ' && (s1[i + 1] == ' ' || s1[i + 1] == '\0'))
			ft_print(s1[i], 1);
		else if ((s1[i] >= 65 && s1[i] <= 90) || (s1[i] >= 97 && s1[i] <= 122))
			ft_print(s1[i], 0);
		else
			write(1, &s1[i], 1);
		i++;
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
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}