#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char res;
    long int nb;

    nb = n;
    if (nb < 0)
    {
            ft_putchar_fd('-', fd);
            nb *= -1;
    }
    if (nb > 9)
    {
            ft_putnbr_fd(nb / 10, fd);
            ft_putnbr_fd(nb % 10, fd);
    }
    else
    {
            res = nb + 48;
            ft_putchar_fd(res, fd);
    }
}
