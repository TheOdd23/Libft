/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:47:09 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:58:00 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cherche la première occurence du
 * char passé en paramètre dans la
 * string passée en paramètre et renvoie
 * un pointeur vers sa première occurence*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		ch;

	i = 0;
	s = (const unsigned char *)str;
	ch = (unsigned char)c;
	while (n-- > 0)
	{
		if (s[i] == ch)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
