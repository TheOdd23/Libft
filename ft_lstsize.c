#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 1;
    if (lst == NULL)
        return (0);
    lst = lst->next;
    while (lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
