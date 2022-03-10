#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     j;
    int     x;
    char    *s2;

    i = 0;
    s2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
    if (s2 == NULL)
        return (NULL);
    while (s1[i])
    {
        j = 0;
        while (set[j])
        {
            if (s1[i] != set[j])
            {
                j++;
                if (set[j] == '\0')
                {
                    s2[x] = s1[i];
                    x++;
                    break;
                }
            }
            else
                break;
        }
        i++;
    }
    s2[x] = '\0';
    return (s2);
}
