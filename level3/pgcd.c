#include <stdio.h>
#include <stdlib.h>

// int pgcd(int i1, int i2)
// {
//     int start;
//     int res;

//     start = (i1 > i2) ? i1 : i2;
//     while (start != 1)
//     {
//         if (i1 > i2)
//             res = ((i1 % start == 0) && (i2 % start == 0)) ? start : i2;
//         else if (i2 > i1)
//             res = ((i1 % start == 0) && (i2 % start == 0)) ? start : i1;
//         if (res == start && (i1 % start == 0) && (i2 % start == 0))
//             return (start);
//         start--;
//     }
//     return (1);
// }

int		pgcd(unsigned int nb, unsigned int nb2)
{
	int i;

	i = nb;
	while (i > 0)
	{
		if (nb % i == 0 && nb2 % i == 0)
			return (i);
		i--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}

// int main(int argc, char **argv)
// {
//     int i;

//     if (argc == 3 && atoi(argv[1]) > 0 && atoi(argv[2]) > 0)
//     {
//         i = pgcd(atoi(argv[1]),atoi(argv[2]));
//         printf("i = %d", i);
//     }
//     return (0);
// }