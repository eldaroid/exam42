#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int denominator(int nb1, int nb2)
{
	int i;
	int tmp;

	i = 1;
	tmp = 1;
	while (i < nb1 && i < nb2)
	{
		tmp = (nb1 % i == 0 && nb2 % i == 0) ? i : tmp;
		i++;
	}
	return (tmp);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", denominator(atoi(argv[1]), atoi(argv[2])));
	}
	write(1, "\n", 1);
	return (0);
}