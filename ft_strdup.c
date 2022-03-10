#include "libft.h"

char *ft_strdup(const char *str)
{
	int		i;	
	char	*dest;

	dest = malloc(ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}