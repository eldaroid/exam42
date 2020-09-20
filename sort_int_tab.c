#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 0;
	tmp = 0;
	if (size < 1)
		return ;
	while (i < size)
	{
		j = i;
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

// void	swap_elements(int *tab, unsigned int p1, unsigned int p2)
// {
// 	int tmp = tab[p1];
// 	tab[p1] = tab[p2];
// 	tab[p2] = tmp;
// }

// void	bubble_sort(int *tab, unsigned int size)
// {
// 	unsigned int i = 0;
// 	unsigned int j = 0;

// 	while (i < size)
// 	{
// 		j = 0;
// 		while (j < size - 1)
// 		{
// 			if (tab[j] > tab[j + 1])
// 				swap_elements(tab, j, j + 1);
// 			j++;
// 		}
// 		i++;
// 	}
// }

// void	sort_int_tab(int *tab, unsigned int size)
// {
// 	if (size <= 1)
// 		return ;
// 	bubble_sort(tab, size);
// }

int main()
{
	int i;

	i = 0;
	int tab[] = {0, 7, 1, 3, 9};
	sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
