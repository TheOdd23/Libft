/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:26:45 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/31 08:46:18 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Libère la mémoire du contenu de la node
 * passée en paramètre*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
