#include <unistd.h>

void	str_capitalizer(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	while (i > 0)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') && (i > 0) && (s[i - 1] != ' ' && s[i - 1] != '\t'))
			s[i] += 32;
		else if ((s[i] >= 'a' && s[i] <= 'z') && (i > 0) && (s[i - 1] == ' ' || s[i - 1] == '\t'))
			s[i] -= 32;
		i--;
	}
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}