#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *nouv;
    size_t  i;
    size_t  j;
    size_t  slen;

    i = start;
    j = 0;
    slen = ft_strlen(s);
    if (s == NULL)
        return (NULL);
    nouv = malloc(sizeof(char) * len + 1);
    if (nouv == NULL)
        return (NULL);
    if (start >= slen)
        return(nouv);
    while (s[i] && j < len)
    {
        nouv[j] = s[i];
        i++;
        j++;
    }
    nouv[j] = '\0';
    return (nouv);
}
