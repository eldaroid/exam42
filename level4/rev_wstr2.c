#include <unistd.h>

int		rev_wstr2(char *str, int len)
{
	int i;

	i = 0;
	while (len > 0 && (str[len] == ' ' || str[len] == '\t'))
		len--;
	while ((str[len - i] != ' ' && str[len - i] != '\t') && i <= len)
		i++;
	write(1, str + len - i + 1, i);
	while (len > 0 && (str[len] == ' ' || str[len] == '\t'))
		len--;
	if (i < len)
		write(1, " ", 1);
	return (len - i);
}

int		main(int argc, char **argv)
{
	int i;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (i > 0)
		{
			i = rev_wstr2(argv[1], i);
		}
	}
	write(1, "\n", 1);
	return (0);
}