#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 1;
    if (lst == NULL)
        return (NULL);
    while (lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}