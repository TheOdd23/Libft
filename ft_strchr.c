#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;

    i = ft_strlen(str);
    if (c == '\0')
            return ((char *)&str[i]);
    i = 0;
    while (str[i])
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i++;
    }
    return (NULL);
}
