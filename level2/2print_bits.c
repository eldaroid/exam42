#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 256;

	i >>= 1;
	while (i)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}

int main()
{
	int nb = 2;

	print_bits(nb);
	return (0);
}