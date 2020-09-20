#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void fprime(int nb)
{
	int i;
	char c;

	i = 2;
	if (nb == 1)
		write(1, "1", 1);
	while (nb > 1)
	{
		
		if (nb % i == 0)
		{
			printf("%d", i);
			nb /= i;
			i--;
			if (nb > 1)
				printf("*");
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	printf("\n");
	return (0);
}
