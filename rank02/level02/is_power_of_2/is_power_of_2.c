#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	int	nb = 1;

	if (n > 2147483647)
		return (0);
	while (nb <= n)
	{
		if (nb == n)
			return 1;
		nb = nb * 2;
	}
	return 0;
}

// int main()
// {
// 	printf("%i\n", is_power_of_2(-4));
// }