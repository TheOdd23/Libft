#include "libft.h"

void   *ft_memset(void *str, int c, size_t n)
{
    size_t      i;
    char *      str2;

    i = 0;
    str2 = (char *)str;
    while (i < n)
    {
       str2[i] = (char)c;
        i++;
    }
    return (str2);
}
