#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 256;

	i >>= 1;
	while (i)
	{
		if (i & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}

int main()
{
    int a = 2;
    print_bits(a);//
    write(1, "\n", 1);//
	return (0);
}