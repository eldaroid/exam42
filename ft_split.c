#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_words(char *str)
{
	int flag;
	int i;
	int count;

	count = 0;
	i =0;
	flag = 1;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && flag == 1)
		{
			flag = 0;
			count++;
		}
		else if (str[i] == ' ')
			flag = 1;
		i++;
	}
	return (count);
}

char *new_array(char *str, int words)
{
	int flag;
	int i;
	int count;
	char *array;

	count = 0;
	i = 0;
	flag = 1;
	while (str[i] && words != count)
	{
		if (str[i] != ' ' && str[i] != '\t' && flag == 1)
		{
			flag = 0;
			count++;
		}
		else if (str[i] == ' ')
			flag = 1;
		i++;

	}
	count = 0;
	if (i > 0)
		i--;
	while (str[i] && str[i] != ' ')
	{
		i++;
		count++;
	}
	if (!(array = (char *)(malloc(sizeof(char) * count + 1))))
		return (NULL);
	array[count] = '\0';
	while (count > 0)
	{
		count--;
		i--;
		array[count] = str[i];
	}
	return (array);
}

char **ft_split(char *str)
{
	int count;
	int i;
	int j;
	char **array;

	count = ft_words(str);
	i = 0;
	if (!(array = (char **)(malloc(sizeof(char) * count + 1))))
		return (NULL);
	array[count] = 0;
	while (i < count)
	{
		j = 0;
		array[i] = new_array(str, i + 1);
		i++;
	}
	return (array);
}

int main()
{
	char **s;

	s = ft_split("  f   ");
	printf("%s\n", s[0]);
	return (0);
}