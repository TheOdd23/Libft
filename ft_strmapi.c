#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *res;
    int     i;

    i = 0;
    res = malloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (res == NULL)
        return (NULL);
    while (s[i])
    {
        res[i] = (f(i, s[i]));
        i++;
    }
    return (res);
}