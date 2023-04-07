#include<stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int leng = 0;
	char *str;

	while (src[leng])
		leng++;
	str = malloc(sizeof(*str) * (leng + 1));
	if (str != '\0')
	{
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}