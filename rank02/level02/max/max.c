
int max(int* tab, unsigned int len)
{
	int i = 0;
	int result;
	result = tab[i];

	while (len > i)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return result;	
}