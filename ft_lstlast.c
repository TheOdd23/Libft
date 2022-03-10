#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst != NULL)
    {
        while (lst->next)
        {
            if (lst->next == NULL)
                return (lst);
            lst = lst->next;
        }
    }
    return (lst);
}