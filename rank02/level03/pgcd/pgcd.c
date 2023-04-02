#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf ("\n");
		return (0);
	}
	int string1 = atoi(argv[1]);
	int string2 = atoi(argv[2]);
	if (string1 <= 0 || string2 <= 0)
	{
		printf ("\n");
		return (0);
	}

	int tmp;
	while (string2 != 0)
	{
		tmp = string2;
		string2 = string1 % string2;
		string1 = tmp;
	}
	printf ("%d\n", string1);
	return (0);
}