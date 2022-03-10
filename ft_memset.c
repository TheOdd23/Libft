#include "libft.h"

void   *ft_memset(void *str, int c, size_t n)
{
    size_t  i;
    char    *str2;
    char    ch;


    i = 0;
    str2 = (char *)str;
    ch = c + 48;
    while (i < n)
    {
        str2[i] = ch;
        i++;
    }
    return ((void *)str2);
} 