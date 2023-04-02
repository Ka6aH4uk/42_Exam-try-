#include<stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *array;
	int i = 0;
	int len = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	array = malloc(sizeof(int) * len);
	if (array)
	{
		while (i < len)
		{
			array[i] = end;
			end--;
			i++;
		}
	}
	return (array);
}
