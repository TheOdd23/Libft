#include "libft.h"

void    ft_bzero(void *str, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return ;
    while (i < n)
    {
        ((char *)str)[i] = 0;
        i++;
    }
}
