#include <stdio.h>
#include <stdlib.h>

// // void	fprime(unsigned int nb)
// // {
// // 	int	prime;

// // 	prime = 2;
// // 	if (nb == 1)
// // 		printf("1");
// // 	while (nb > 1)
// // 	{
// // 		if (nb % prime == 0)
// // 		{
// // 			printf("%d", prime);
// // 			nb /= prime; 
// // 			if (nb > 1)
// // 				printf("*");
// // 			prime--;
// // 		}
// // 		prime++;
// // 	}
// // }

// void	fprime(unsigned int nb, int i)
// {
// 	// sign++;
// 	if (nb == 1)
// 		printf("%d", nb);
// 	if (nb % i == 0)
// 	{
// 		printf("%d", i);
// 		nb /= i;
// 		if (nb > 1)
// 			printf("*");
// 		if (nb > 1)
// 			fprime(nb, i);
// 	}
// 	else
// 	{
// 		i++;
// 		fprime(nb, i);
// 	}
// }

void	fprime(int nb, int i)
{
	while (nb % i != 0 && i < nb)
		i++;
	if (nb % i == 0)
	{
		printf("%d", i);
		nb /= i;
		if (nb > 1)
			printf("*");
		if (nb != i && nb > 1)
			fprime(nb, i);
	}
	else
		printf("%d", nb);
}


int		main(int ac, char **av)
{
	if (ac == 2 && av[1][0] != '\0')
		fprime(atoi(av[1]), 2);
	printf("\n");
	return (0);
}