#include "libft.h"

size_t  ft_strlen(const char *str)
{
    int size;

    size = 0;
    while (str[size])
        size++;
    return (size);
}