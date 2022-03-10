#include "libft.h"

size_t  ft_strlcat(char *dest, char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  destlen;
    size_t  srclen;

    i = 0;
    destlen = ft_strlen(dest);
    srclen = ft_strlen(src);
    j = destlen;
    if (size <= 0)
        return (srclen);
    if (size < destlen)
        return (size + srclen);
    while (src[i] && size > destlen + 1)
        dest[j++] = src[i++];
    dest[j] = '\0';
    return (destlen + srclen);
}