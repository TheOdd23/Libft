#include "libft.h"

void *ft_memcpy(void *s1, const void *s2, size_t n)
{
    size_t      i;
    char        *dest;
    const char  *src;

    i = 0;
    dest = (char *)s1;
    src = (const char *)s2;
    if (dest == NULL && src == NULL)
        return (NULL);
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return ((void *)dest);
}