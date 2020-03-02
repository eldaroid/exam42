#include <stdlib.h>
#include <stdio.h>

int		ft_count(int nb)
{
	int count;

	count = 1;
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb /= 10)
		count++;
	return (count);
}

// char	*ft_itoa(int nb)
// {
// 	int		count_nb;
// 	char	*array;
// 	int		i;

// 	i = 0;
// 	count_nb = ft_count(nb);
// 	if (!(array = (char*)malloc(sizeof(char) * count_nb + 1)))
// 		return (NULL);
// 	if (nb < 0)
// 	{
// 		array[0] = '-';
// 		nb *= -1;
// 	}
// 	array[count_nb] = '\0';
// 	while (nb >= 0)
// 	{
// 		if (nb >= 10)
// 		{
// 			count_nb--;
// 			array[count_nb] = nb % 10 + '0';
// 			nb /= 10;
// 		}
// 		if (nb >= 0 && nb < 10)
// 		{
// 			count_nb--;
// 			array[count_nb] = nb + '0';
// 			break ;
// 		}
// 	}
// 	return (array);
// }

char	*ft_itoa(int nb)
{
	int		i;
	char	*tmp;
	int		count_nb;

	i = 0;
	count_nb = ft_count(nb);
	tmp = malloc(sizeof(char) * count_nb + 1);
	if ((tmp == NULL) || nb == 0)
		return ((nb == 0) ? "0" : NULL);
	if (nb == -2147483648)
		return ("-2147483648");
	if (nb < 0)
	{
		tmp[0] = '-';
		nb *= -1;
	}
	tmp[count_nb] = '\0';
	while (nb > 0)
	{
		if (nb > 9)
		{
			count_nb--;
			tmp[count_nb] = nb % 10 +'0';
			nb /= 10;
		}
		if (nb > 0 && nb < 10)
		{
			count_nb--;
			tmp[count_nb] = nb + '0';
			nb = nb/nb - 1;
		}
	}
	return (tmp);
}

int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while (i < 5)
		printf("%s\n", ft_itoa(tab[i++]));

	return 0;
}