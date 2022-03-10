#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;

    i = 0;
    if (s[0] == '\0')
        return;
    while (s[i])
    {
        f(i, s[i]);
        i++;
    }
}