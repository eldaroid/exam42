#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int words(char *s)
{
	int count;
	int i;
	int flag;

	count = 0;
	i = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t' && flag == 1)
		{
			count++;
			flag = 0;
		}
		else if(s[i] == ' ')
			flag = 1;
		i++;
	}
	return (count);
}

void print_str(char *str, int k)
{
	while (str[k] != ' ' && str[k])
	{
		write(1, &str[k], 1);
		k++;
	}
}

void rev_wstr(char *str)
{
	int count;
	int i;
	int k;

	i =0;
	k = 0;
	count = words(str);
	while (str[k])
	{
		k++;
	}
	printf("%d\n", k);
	printf("%d\n", count);
	while (count > 0)
	{
		while (str[k] != ' ' && k > 0)
		{
			k--;
		}
		if (str[k] == ' ')
		{
			print_str(str, k + 1); 
			if (count > 1)
				write(1, " ", 1);
			k--;
		}
		else if (k == 0)
			print_str(str, k);
		count--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
