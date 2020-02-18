#include <unistd.h>
#include <stdio.h>
// int     hidenp(char *s1, char *s2)
// {
//     int  i;
//     int j;

//     i = 0;
//     j = 0;
//     while (s1[i])
//     {
//         while(s2[j] != s1[i] && s2[j])
//             j++;
//         if (s2[j] != s1[i])
//             return (0);
//         i++;
//     }
//     return (1);
// }

int     hidenp(char *s1, char *s2)
{
    while (*s2)
    {
        if (*s1 == *s2)
            s1++;
        s2++;
    }
    return (*s1 == '\0' ? 1 : 0);
}

void    ft_putnbr(int i)
{
    char c;

    c = i + '0';
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{
    int res;

    if (argc == 3)
    {
        res = hidenp(argv[1], argv[2]);
        ft_putnbr(res);
    }
    write(1, "\n", 1);
    return (0);
}