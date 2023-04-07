#include<unistd.h>

int ft_atoi(char *str)
{
	int nb = 0;

	while (*str != '\0')
	{
		nb = nb * 10;
		nb = nb + *str - '0';
		++str;
	}
	return (nb);
}

void	print_hex(int n)
{
	char	hex_d[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex_d[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
