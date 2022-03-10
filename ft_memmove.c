#include "libft.h"

void *ft_memmove(void *s1, const void s2, size_t n)
{
    char    *dest;
    char    *src;
    size_t  i;

    dest = (char *)s1;
    src = (const char *)s2;
    i = 0;
    if (dest == NULL && src == NULL)
        return (NULL);
    if (dest > src)
    {
        while (n > 0)
        {
            dest[n] = src[n];
            n--;
        }
    }
    else
    {
        while (i < n)
        {
            dest[i] = src[i];
            i++;
        }
    }
    return ((void *)dest);
}