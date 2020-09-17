#include <stdio.h>
#include <stdlib.h>

int ft_words(char *s1)
{
	int flag;
	int i;
	int count;

	count = 0;
	i = 0;
	flag = 1;
	while (s1[i])
	{
		if (s1[i] != ' ' && flag == 1)
		{
			flag = 0;
			count++;
		}
		else if (s1[i] == ' ')
			flag = 1;
		i++;
	}
	return (count);
}

char *fill(char *str, int square)
{
	int flag;
	int i;
	int count;
	char *s1;

	i = 0;
	flag = 1;
	count = 0;
	while (str[i] && count != square)
	{
		if (str[i] != ' ' && flag == 1)
		{
			flag = 0;
			count++;
		}
		else if (str[i] == ' ')
			flag = 1;
		i++;
	}
	i--;
	flag = i;
	if (square == count)
	{
		while (str[i] && str[i] != ' ')
		{
			i++;
		}
		if (!(s1 = (char *)malloc(sizeof(char) * (i - flag) + 1)))
			return (NULL);
		printf("sq = %d, i - fl = %d\n", square, i - flag);
		s1[i - flag] = '\0';
		i = 0;
		while (str[flag] && str[flag] != ' ')
		{
			s1[i] = str[flag];
			i++;
			flag++;
		}
	}
	return (s1);
}

char **ft_split(char *str)
{
	int i;
	int count;
	char **array;
	int square;

	count = ft_words(str);
	i = 0;
	if (! (array = (char **)(malloc(sizeof(char *) * (count + 1)))))
		return(NULL);
	array[count] = 0;
	square = 0;
	while (square < count)
	{
		array[square] = fill(str, square + 1);
		printf("%s\n", array[square]);
		square++;
	}
	return (array);
}

int main(void)
{
	char s1[] = "fff f fff fff ffff";

	ft_split(s1);
	return (0);
}
