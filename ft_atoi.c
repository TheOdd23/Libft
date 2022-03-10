#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int neg;
    long int nb;

    i = 0;
    neg = 1;
    nb = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if ((str[i] == '+' || str[i] == '-') && (str[i + 1] == '-' || str[i + 1] == '+'))
        return (0);
    if (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
                neg *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        nb *= 10;
        nb += (str[i] - '0');
        i++;
    }
    return(nb * neg);
}