#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_count(char *str)
{
	int		i;
	int		flag;
	int		count;

	count = 0;
	flag = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && flag == 0)
		{
			count++;
			flag = 1;
		}
		if (str[i] == ' ' || str[i] == '\t')
			flag = 0;
		i++;
	}
	return (count);
}

char	*ft_fill(char *str, int start, int word_len)
{
	char	*new;
	int		i;

	new = (char *)malloc(sizeof(char) * (word_len + 1));
	i = 0;
	new[word_len] = '\0';
	while(word_len > 0 && str[start])
	{
		new[i++] = str[start++];
		word_len--;
	}
	return (new);
}

char	**ft_split(char *str)
{
	char	**new;
	int		point;
	int		i;
	int		start;
	int		len;
	int		word_len;

	len = ft_count(str);
	i = 0;
	point = 0;
	if (!(new = (char **)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	while(str[i])
	{
		word_len = 0;
		if (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			start = i;
			while (str[i] && str[i] != ' ' && str[i] != '\t')
			{
				word_len++;
				i++;
			}
		}
		new[point++] = ft_fill(str, start, word_len);
		if (str[i])
			i++;
	}
	new[point] = 0;
	return(new);
}

int		main(void)
{
	    char argv[]  = "aaa bbb ccc";
  int argc = 2;
	char	**str;
	if (argc == 2)
	{
		str = ft_split(argv);
		// ft_split(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

// int main (void)
// {
// 	char** res;
// 	for (res = ft_split("asdf qwerty zxcv"); *res != '\0'; res++)
// 		printf("'%s',", *res);
// 	printf("\n");
// 	return (0);
// }