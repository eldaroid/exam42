#include <unistd.h>
#include <stdio.h>

int ft_words(char *s1)
{
	int i;
	int flag = 1;
	int count = 0;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != ' ' && flag == 1)
		{
			count++;
			flag = 0;
		}
		else if (s1[i] == ' ')
			flag = 1;
		i++;
	}
	return (count);
}

void epur_str(char *s1)
{
	int i;
	int flag;
	int count;

	i = 0;
	flag = 0;
	count = 0;
	while (s1[i])
	{
		// if (check_space(s1, i, count))
		if (s1[i] != ' ' && s1[i - 1] == ' ' && count > 0)
			write(1, " ", 1);
		if (s1[i] != ' ')
			write(1, &s1[i], 1);
		if (s1[i] != ' ')
			count++;
		i++;
	}
}

int main(int argc, char **argv)
{

	if (argc == 2)
	{
		epur_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}