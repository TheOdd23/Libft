#include "libft.h"

/*Supprime et libère la node passée en paramètre et toutes les suivantes*/

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (lst)
	{
		while (*lst)
		{
			list = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = list;
		}
	}
}
