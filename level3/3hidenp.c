#include <stdio.h>

int ft_strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

int hidenp(char *s1, char *s2)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i])
	{
		while (s2[j] && s1[i] != s2[j])
		{

			j++;
		}
		if (s1[i] == s2[j])
			count++;
		i++;
	}
	if (count == ft_strlen(s1))
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", hidenp(argv[1], argv[2]));
	}
	return (0);
}
