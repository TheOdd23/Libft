#include "libft.h"

char *strrchr(const char *str, int ch)
{
    int i;

    i = ft_strlen(str);
    while (i > 0)
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i--;
    }
    return (0);
}