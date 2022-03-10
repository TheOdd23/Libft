#include "libft.h"

char *ft_strnstr(const char *str, const char *to_find, size_t n)
{
    size_t  i;
    size_t  j;
    size_t  tf_len;
    char    *s;
    char    *tf;

    i = 0;
    j = 0;
    s = (char *)str;
    tf = (char *)to_find;
    tf_len = ft_strlen(tf);
    if (tf[0] == '\0')
        return (s);
    while (s[i] && i < n)
    {
        if ((s[i] == tf[0] )&& (tf_len <= n - i))
        {
            while (s[i + j] == tf[j])
                j++;
            if (tf[j] == '\0')
                return (s + i);
            j = 0;
        }
        i++;
    }
    return (NULL);
}