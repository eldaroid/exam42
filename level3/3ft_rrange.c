#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int count;
	int *array;
	int tmp;

	count = 0;
	if (start > end)
		count = start - end + 1;
	else
		count = end - start + 1;
	if (!(array = (int *)malloc(sizeof(int) * count)))
		return (NULL);
	printf("count = %d\n", count);
	if (array)
	{
		tmp = (start > end) ? start : start;
		count--;
		printf("tmp = %d\n", tmp);
		while (count)
		{
			array[count] = tmp;
			// printf("tmp%d = %d\n", tmp,count);
			tmp = (start > end) ? tmp -1 : tmp +1;
			// printf("tmp = %d\n", tmp);
			count--;
		}
		array[count] = tmp;
	}
	return (array);
}

// int     *ft_rrange(int start, int end)
// {
// 	int	*r;
// 	int	len;

// 	len = (end >= start) ? end - start + 1 : start - end + 1;
// 	if (!(r = (int*)malloc(sizeof(int) * len)))
// 		return (NULL);
// 	 while (len--)
//      {
// 		 r[len] = (end >= start) ? start++ : start--;
//         // printf("array = %d\n", r[len]);
//      }
// 	return (r);
// }

int main()
{
	int *array = ft_rrange(0, -3);

	printf("0 %d\n", array[0]);
	printf("1 %d\n", array[1]);
	printf("2 %d\n", array[2]);
	printf("3 %d\n", array[3]);
	return (0);
}