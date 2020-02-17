#include <stdlib.h>

int ft_rrange(int  start, int end)
{
    int     count;

    count = (end >= start) ? end - start : start - end;
    return (i);
}

void    ft_putnbr(int nb)
{
    char    c;

    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb %= 1000000000;
        nb *= -1;
    }
    if (nb < 0)
    {
        nb *= -1;
        write(1, "-", 1);
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

int     main(void)
{
    int i = ft_rrange(1, 3);
    ft_putnbr(i);
    return (0);
}
