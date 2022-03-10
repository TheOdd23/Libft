#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
    char *new;

    new = malloc(num * size);
    if (new == NULL)
        return (NULL);
    ft_bzero(new, (num * size);
    return ((void *)new);
}