#include <unistd.h>
#include <stdio.h>
//lcm - нок 12 5 = 60
//pgcd - нод 12 5 = 1

#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)

unsigned int gcd2(unsigned int a, unsigned int b)
{
	int k = max(a,b);
	int m = min(a,b);
	// loop invariant: k ≥ m ∧ GCD(a,b) = GCD(k,m)
	while (m != 0)
	{
		int r = k % m;
		k = m;
		m = r;
	}
  // At this point, GCD(a,b) = GCD(k,m) = GCD(k,0) = k
  return k;
}

unsigned int	lcm2(unsigned int a, unsigned int b)
{
	unsigned int GCD = gcd2(a, b);
	return GCD ? (a * b / GCD) : 0;
}

int		pgcd1(int nb1, int nb2)
{
	int		small_int;
	
	small_int = (nb1 < nb2) ? nb1 : nb2;
	while (small_int > 0)
	{
		if (nb1 % small_int == 0 && nb2 % small_int == 0)
			return (small_int);
		small_int--;
	}
	return (1);
}

unsigned int    lcm1(unsigned int a, unsigned int b)
{
	int		NOD;

	NOD = pgcd1(a, b);
	return (NOD ? a * b / NOD : 0);
}

int		main(int argc, char **argv)
{
	printf("a = %d\n", lcm1(89, 74));
	printf("b = %d\n", lcm2(89, 74));
	return (0);
}