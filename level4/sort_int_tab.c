#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int		count;
	int		i;
	int		tmp;
	int		j;

	count = 0;
	i = 0;
	j = 1;
	while (count++ < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	int i = -1;
	int		tab[] = {5,3,6,4,8,9};
	sort_int_tab(tab, 6);
	while (i++ < 5)
	{
		printf("%d\n", tab[i]);
	}
	return (0);
}