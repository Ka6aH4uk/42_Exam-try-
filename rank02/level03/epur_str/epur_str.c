#include<unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int fst = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t' && argv[1][i] != '\0')
				i++;
			if (fst == 1 && argv[1][i] != '\0')
				write(1, " ", 1);
			fst = 1;
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
				write(1, &argv[1][i++], 1);
		}
	}	
	return (write(1, "\n", 1));
}
