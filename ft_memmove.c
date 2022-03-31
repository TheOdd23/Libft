/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:02:57 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:58:46 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copie n bytes du bloc mémoire s1 dans le bloc 2 et le bloc deux conserve les
 * bytes excédant si s1 est plus petit que n*/

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	if ((char *)s1 == NULL && (char *)s2 == NULL)
		return (NULL);
	if ((char *)s1 > (char *)s2)
	{
		while (n-- > 0)
			((char *)s1)[n] = ((char *)s2)[n];
	}
	else
	{
		while (i < n)
		{
			((char *)s1)[i] = ((char *)s2)[i];
			i++;
		}
	}
	return (s1);
}
