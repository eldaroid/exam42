#include <unistd.h>

void	rstr_capitalizer(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] += 32;
		if ((string[i] >= 'a' && string[i] <= 'z') && (string[i] == '\t' || string[i] == ' ' || string[i + 1] == '\0'))
			string[i] -= 32;
		write(1, &string[i], 1);
		i++;
	}
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
	else
		write(1, "\n", 1);
	return (0);
}