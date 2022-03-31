/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:10:20 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 14:03:53 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cherche la string to_find dans la string passée
 * en paramètre dans n nombre de bytes*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	tf_len;

	i = 0;
	tf_len = ft_strlen(to_find);
	if (to_find[0] == '\0' || to_find == NULL)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < n)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
