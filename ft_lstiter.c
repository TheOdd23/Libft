/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:27:23 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:55:59 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applique la fonction 'f' sur le contenu de chaque node de la liste passée
 * en paramètre*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	if (lst == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
