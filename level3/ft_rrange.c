#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// int *ft_rrange(int  start, int end)
// {
//     int     count;
//     int     *array;

//     count = (end >= start) ? end - start + 1: start - end + 1;
//     ft_putnbr(count);
//     printf("\n");
//     if (!(array = (int *)malloc(sizeof(int) * count)))
//         return (NULL);
//     while (count-- > 0)
//     {
//         array[count] = (end >= start) ? start++: start--;
//         printf("array = %d\n", array[count]);
//     }
//     return (array);
// }
int     *ft_rrange(int start, int end)
{
	int	*r;
	int	len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	 while (len--)
     {
		 r[len] = (end >= start) ? start++ : start--;
        printf("array = %d\n", r[len]);
     }
	return (r);
}

int     main(void)
{
    int *array = ft_rrange(-1, 3);
    return (0);
}
