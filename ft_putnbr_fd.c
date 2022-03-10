#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *res;
    
    res = ft_itoa(n);
    write(fd, res, ft_strlen(res));
}