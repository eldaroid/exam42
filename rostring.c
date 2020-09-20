#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_words(char *s)
{
	int flag;
	int i;
	int count;

	count = 0;
	flag = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t' && flag == 1)
		{
			count++;
			flag = 0;
		}
		else if (s[i] == ' ')
			flag = 1;
		i++;
	}
	return (count);
}

void rostring(char *s)
{
	int i;
	int count;
	int k;
	int flag;

	flag = 1;
	k = 0;
	i = 0;

	count = ft_words(s);
	if (count > 1)
	{
		while (s[i] && k != 2)
		{
			if (s[i] != ' ' && s[i] != '\t' && flag == 1)
			{
				k++;
				flag = 0;
			}
			else if (s[i] == ' ')
				flag = 1;
			i++;
		}
		i--;
		// printf("\n%d\n", i);
		// printf("\n%c\n", s[i]);
		while (s[i])
		{
			if (s[i] != ' ')
				write(1, &s[i], 1);
			else if (s[i - 1] != ' ' && s[i] == ' ')
				write(1, " ", 1);
			i++;
		}
		i = 0;
		k = 0;
		flag = 1;
		write(1, " ", 1);
		while (s[i] && k != 2)
		{
			if (s[i] != ' ' && s[i] != '\t' && flag == 1)
			{
				k++;
				flag = 0;
			}
			else if (s[i] == ' ')
				flag = 1;
			if (s[i] != ' ' && k != 2)
				write(1, &s[i], 1);
			i++;
		}
	}
	else if (count == 1)
	{
		i = 0;
		while (s[i])
		{
			if (s[i] != ' ')
				write(1, &s[i], 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		rostring(argv[1]);
	}
	printf("\n");
	return (0);
}