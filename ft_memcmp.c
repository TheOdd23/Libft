#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
     size_t     i;
     const char *s1;
     const char *s2;

    s1 = (const char *)str1;
    s2 = (const char *)str2;
    i = 0;
    if (n <= 0)
        return (0);
    while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < n)
        i++;
    return (s1[i] - s2[i]);
}