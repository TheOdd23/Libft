#include "libft.h"

void    ft_bzero(void *str, size_t n)
{
    size_t          i;
    char            *str2;

    i = 0;
    str2 = (char *)str;
    if (n == 0)
        return ;
    while (i < n)
    {
        str2[i] = 0;
        i++;
    }
}
