#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t      i;
    const char  *s;

    i = 0;
    s = (const char *)str;
    if (n <= 0)
        return (0);
    while (s[i] && i < n)
    {
        if (s[i] == (char)c)
            return ((void *)&s[i]);
        i++;
    }
    return (0);
}