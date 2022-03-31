/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:22:54 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:58:28 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copie n bytes du bloc mémoire s1 dans le bloc s2*/

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*src;

	i = 0;
	dest = (unsigned char *)s1;
	src = (unsigned const char *)s2;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
